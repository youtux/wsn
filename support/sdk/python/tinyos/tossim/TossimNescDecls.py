# Copyright (c) 2000-2003 The Regents of the University of California.  
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
# - Redistributions of source code must retain the above copyright
#   notice, this list of conditions and the following disclaimer.
# - Redistributions in binary form must reproduce the above copyright
#   notice, this list of conditions and the following disclaimer in the
#   documentation and/or other materials provided with the
#   distribution.
# - Neither the name of the copyright holders nor the names of
#   its contributors may be used to endorse or promote products derived
#   from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
# FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
# THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
# INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
# (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
# SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
# STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
# OF THE POSSIBILITY OF SUCH DAMAGE.
#
# @author Kamin Whitehouse 
#

import sys, string, math, re, os
from struct import *
from xml.dom import minidom
from copy import deepcopy

###########
# This class can be used to hold a basic nesc type, eg uint8_t It can
# be set and get through nescType.value, and does type checking
# 
###########

def findBuildFile(givenString, desiredFilename):
  """This function will find a desiredFilename (eg. nescDecls.xml) the build directory
  from a givenString (e.g 'build/pc').  Legal givenStrings are:
  1.  Full path,     eg: /home/kamin/tinyos-1.x/...
  2.  relative path, eg: apps/TestRpc/build/pc
  3.  platform name, eg: pc or telosb
  """

  #check to see if the given string contains the desiredFilename
  if givenString.find(desiredFilename) >= 0:
    filename = givenString

  elif givenString.find('/') >= 0 :
    filename = givenString + desiredFilename

  elif len(givenString) > 0:
    filename = f'build/{givenString}/{desiredFilename}'

  elif os.environ.has_key("TINYOS_DEFAULT_PLATFORM") :
    filename = 'build/' + os.environ["TINYOS_DEFAULT_PLATFORM"] + '/' + desiredFilename

  else:
    filename = desiredFilename

  #check to see if the file was successfully found
  if not os.path.isfile(filename):
    raise IOError(f"File {filename} not found")
  return filename

  
class nescType( object ) :
  """A python representation of a nesc type.

  usage:
  X = nescType.value
  nescType.value = X
  bytes = nescType.getBytes()
  nescType.setBytes(bytes)
  nescType
  print nescType
  """

  def __init__( self , nescType, cType, pythonType, xmlTag,
                conversionString, size, defaultValue) :
    """create a new nescType"""
    self.nescType = nescType
    self.cType = cType
    self.pythonType = pythonType
    self._xmlTag = xmlTag
    self.size = size
    self._conversionString = conversionString
    self.value = defaultValue

  def __repr__(self) :
    return "%s object at %s:\n\n%20s : %s" % (self.__class__, hex(id(self)), "value", str(self))

  def __str__(self):
    if self._conversionString == "c":
      return f"'{str(self.value)}'"
    else:
      return str(self.value)

  #   this func could be used for type checking 
  def __setattr__(self, name, value) :
    if self.__dict__.has_key("value") and name == "value":
        #use the type conversions built into pack
        pack(self._conversionString, value)
    self.__dict__[name] = value

  def oneLineStr(self) :
    return str(self)

  def __deepcopy__(self, memo={}) :
    result = nescType(self.nescType, self.cType, self.pythonType,
                    self._xmlTag, self._conversionString, self.size,
                    deepcopy(self.value, memo))
    memo[id(self)] = result
    return result
  
  def isType(self, xmlDefinition) :
    """returns 1 if the xml definition describes this type.
    Returns 0 otherwise."""
    if xmlDefinition != None and xmlDefinition.tagName == self._xmlTag and \
           xmlDefinition.hasAttribute("cname") and \
           xmlDefinition.getAttribute("cname") == self.cType :
      return 1
    elif self.nescType == "void" and xmlDefinition.tagName == self._xmlTag :
      #void is a special xml case that doesn't have cname defined (grr)
      return 1
    else :
      return 0
  
  def getBytes(self) :
    """Hexidecimal representation of a value of this type"""
    if self.nescType == "void" :
      return ''
    try:
      bytes = pack(self._conversionString, self.value)
    except Exception, inst:
      print inst
      raise Exception("Bytes conversion error: %s %d bytes to %d" %
                      (self.nescType, len(bytes), self.size) )
    if len(bytes) != self.size:
      raise Exception("Wrong number of bytes for conversion: %s %d bytes to %d" %
                      (self.nescType, len(bytes), self.size))
    return bytes
  
  def setBytes(self, bytes):
    """A value of this type from a hexidecimal representation"""
    if self.nescType == "void" :
      return bytes
    if len(bytes) < self.size:
      raise Exception("Wrong number of bytes for conversion: %s %d bytes to %d" %
                      (self.nescType, len(bytes), self.size))
    try:
      self.value, = unpack( self._conversionString, bytes[:self.size])
    except Exception, inst:
      print inst
      raise Exception("Bytes conversion error: %s %d bytes to %d" %
                      ( self.nescType, len(bytes), self.size) )
    return bytes[self.size:]

###########
# Array of basic nesc types,
###########

class nescArray( object ) :
  """A python representation of a nesc array.

  usage:
  array = nescArray(size, nescType)
  array = nescArray(myTypes, xmlDecl)
  X = array[3]
  X = array[3:6] (returns a list or, if char[] array, a python string)
  array[3] = X
  array[3:6] [X,Y,Z] (or, if char[], \"foo\")
  bytes = array.getBytes()
  array.setBytes(bytes)
  array
  print array
  """

  def __init__( self , *varargs):
    """initialize all elements to 0"""
    if not varargs:
      return
    elif len(varargs) == 2 and type(varargs[0]) == int:
      (self.len,self.elementType) = varargs[:]
      bracketStr = f"[{str(self.len)}]"
    elif len(varargs) == 2:
      (nescTypes, xmlDefinition) = varargs[:]
      if xmlDefinition.tagName != "type-array" :
        raise Exception("Not array definition")
      child = getUniqueChild(xmlDefinition)
      self.elementType = nescTypes.getTypeFromXML(child)
      sizeStr = xmlDefinition.getAttribute("elements")[2:]
      self.len = int(sizeStr)
      bracketStr = f"[{sizeStr}]"
    else:
      raise Exception("Illegal array params")
    self.nescType = self.elementType.nescType + bracketStr
    self.cType = self.elementType.cType + bracketStr
    self.pythonType = self.elementType.pythonType + bracketStr
    self.size = self.len * self.elementType.size
    self.value = []
    self.value.extend(deepcopy(self.elementType) for _ in range(self.len))
      

  def __repr__(self) :
    """A printable representation of the value"""
    return "%s object at %s:\n\n\t%s" % (self.__class__, hex(id(self)), str(self))
    
  def __str__(self) :
    """A printable representation of the value"""
    string = "nescArray of type %s:\n" % self.nescType
#     if self.elementType._conversionString == "c":
#       string += self.oneLineStr()
#     else:
    for i in range(self.len) :
      string += "%2d: %s\n" % (i, self.value[i].oneLineStr())
    return string

  def __getitem__(self, key):
    if self.elementType.__class__ != nescType:
      return self.value.__getitem__(key)
    if key.__class__ != slice:
      return self.value.__getitem__(key).value
    if self.elementType._conversionString == "c":
      return "".join(item.value for item in self.value.__getitem__(key))
    else:
      return [item.value for item in self.value.__getitem__(key)]
      
  def __setitem__(self, key, value): 
    if self.elementType.__class__ == nescType:
      if key.__class__ == slice:
        for i, item in enumerate(self.value.__getitem__(key)):
          item.value = value[i]
      else:
        self.value.__getitem__(key).value = value
    else:
      self.value.__setitem__(key, value)

  def __delitem__(self, key) : 
      return self.value.__delitem__(key)

  def oneLineStr(self):
    """A one-line representation of the value"""
    #maybe the string should just print like a string
    #but the \x00 chars look like nothing
#     if self.elementType._conversionString == "c":
#       string = '\''
#       for c in self.value :
#         string += c.value
#       string += '\''
#     else:
    tmpStr = str(self.elementType)
    if "\n" in tmpStr or len(tmpStr) > 5:
      return self.nescType
    i = 0
    string = "["
    while len(string) < 40 and i < self.len:
      string += f"{str(self.value[i])}, "
      i += 1
    string += "...]" if i < self.len else "\b\b]"
    return string
 
  def __deepcopy__(self, memo={}) :
    result = nescArray()
    memo[id(self)] = result
    result.elementType = deepcopy(self.elementType, memo)
    result.nescType = self.nescType
    result.cType = self.cType
    result.pythonType = self.pythonType
    result.len = self.len
    result.size = self.size
    result.value = deepcopy(self.value, memo)
    return result

  def isType(self, xmlDefinition) :
    """returns 1 if the xml definition describes this type.
    Returns 0 otherwise."""
    if ( xmlDefinition != None and xmlDefinition.tagName == "type-array" and
         int(xmlDefinition.getAttribute("elements")[2:]) == self.len ) :
      child = getUniqueChild(xmlDefinition)
      return self.elementType.isType(child)
    else :
      return 0

  def getBytes(self):
    """Hexidecimal representation of a value of this type"""
    bytes = "".join(self.value[i].getBytes() for i in range(self.len))
    if len(bytes) != self.size:
      raise Exception("Byte conversion error: %s %d bytes to %d" %
                      ( self.nescType, len(bytes), self.size))
    return bytes
    
  
  def setBytes(self, bytes) :
    """A value of this type from a hexidecimal representation"""
    if len(bytes) < self.size:
        raise Exception("Byte conversion error: %s %d bytes to %d" %
                        (self.nescType, len(bytes), self.size) )
    for i in range(self.len) :
      bytes = self.value[i].setBytes(bytes)
    return bytes

###########
# Pointer to basic nesc types,
###########

class nescPointer( object ) :
  """A python representation of a nesc pointer.

  usage:
  pointer = nescPointer(ptrSize, nescType)
  pointer = nescPointer(myTypes, xmlDecl)
  nescType = pointer.value
  pointer.value = nescType
  bytes = pointer.getBytes()
  pointer.setBytes(bytes)
  pointer
  print pointer
  """
  
  def __init__( self , *varargs):
    """initialize all elements to 0"""
    if not varargs:
      return
    elif len(varargs) == 2 and varargs[1].__dict__.has_key("tagName"):
      (nescTypes, xmlDefinition) = varargs[:]
      if xmlDefinition.tagName != "type-pointer" :
        raise Exception("Not pointer definition")
      child = getUniqueChild(xmlDefinition)
      self.value = nescTypes.getTypeFromXML(child)
      self.size = int(xmlDefinition.getAttribute("size")[2:])
    elif len(varargs) == 2 :
      self.size = varargs[0].types["unsigned int"].size
      self.value = varargs[1]
    else:
      raise Exception("Illegal nescPointer constructor arguments")
    self.nescType = f"{self.value.nescType}*"
    self.cType = f"{self.value.cType}*"
    self.pythonType = f"{self.value.pythonType}*"
      
  def __repr__(self) :
    return "%s object at %s:\n\n\t%s" % (self.__class__, hex(id(self)), str(self))

  def __str__(self):
    """A text representation of the value"""
    return f"ptr-> {str(self.value)}"

  def oneLineStr(self):
    """A one-line representation of the value"""
    return f"ptr-> {self.value.oneLineStr()}"

  def __deepcopy__(self, memo={}) :
    result = nescPointer()
    memo[id(self)] = result
    result.value = deepcopy(self.value, memo)
    result.size = self.size
    result.nescType = self.nescType
    result.cType = self.cType
    result.pythonType = self.pythonType
    return result

  def isType(self, xmlDefinition) :
    """returns 1 if the xml definition describes this type.
    Returns 0 otherwise."""
    if xmlDefinition != None and xmlDefinition.tagName == "type-pointer" :
      child = getUniqueChild(xmlDefinition)
      return self.value.isType(child)
    else :
      return 0

  def getBytes(self):
    bytes = pack(f"{str(self.size)}s", '\x00')
    if len(bytes) != self.size:
        raise Exception("Byte conversion error: %s %d bytes to %d" %
                        (self.nescType, len(bytes), self.size) )
    return bytes
  
  def setBytes(self, bytes) :
    if len(bytes) < self.size:
        raise Exception("Byte conversion error: %s %d bytes to %d" %
                        ( self.nescType, len(bytes), self.size) )
    return bytes[self.size:]


###########
# Struct of basic nesc types,
###########

class nescStruct( object ) :
  """A python representation of a nesc structure.

  usage:
  struct = nescStruct(myTypes, xmlDecl)
  struct = nescStruct(structName, (fieldName, type) (fieldName, type), ...)
  X = struct.field
  struct.field = X
  bytes = struct.getBytes()
  struct.setBytes(bytes)
  struct
  print struct
  """

  def __init__( self, *varargs):
    """initialize all fields to 0"""
    self.__dict__["value"] = {}
    self.fields = []
    self.size = 0
    if not varargs:
      self.nescType = ""
    elif len(varargs) >= 1 and type(varargs[0]) in [str, unicode]:
      self.nescType = varargs[0]
      self._parseNescTypeFields(varargs[1:])
    elif len(varargs) == 2 and type(varargs[1]) != tuple :
      (nescTypes, xmlDefinition) = varargs[:]
      if xmlDefinition.tagName != "struct" :
        raise Exception("Not struct definition")
      if xmlDefinition.hasAttribute("name") == False:
        raise Exception("Anonymous struct")
      self.nescType = xmlDefinition.getAttribute("name")
      if xmlDefinition.getAttribute("size")[2:]:
        self.size = int(xmlDefinition.getAttribute("size")[2:])
      else:
        self.size = 0
      self._parseXMLFields(nescTypes, xmlDefinition)
    else:
      raise Exception("Illegal nescStruct constructor args")
    self.cType = self.nescType
    self.pythonType = self.nescType
    self.__initialized = True
    
  def __getattr__(self, name):
    if not self.__dict__.has_key("value"):
      raise AttributeError("No such field \"%s\" in the nescStruct \"%s\"" % (name, self.nescType))
    if self.value.has_key(name):
      return (self.value[name].value
              if self.value[name].__class__ == nescType else self.value[name])

  def __setattr__(self, name, value) :
    if not self.__dict__.has_key("_nescStruct__initialized") :
      self.__dict__[name] = value
      return
    if self.value.has_key(name) :
      if self.value[name].__class__ == nescType :
          self.value[name].value = value;
      else :
          self.value[name] = value;
    elif self.__dict__.has_key(name) :
      self.__dict__[name] = value
    else :
      raise AttributeError("No such field \"%s\" in the nescStruct \"%s\"" % (name, self.nescType))
        

  def __repr__(self) :
    return "%s object at %s:\n\n\t%s" % (self.__class__, hex(id(self)), str(self))
    
  def __str__(self):
    """All fields and values as a readable string"""
    string = self.nescType + ": \n"
    for field in self.fields:
      string += "%30s  : %s\n" % (
          f'{self.value[field["name"]].nescType} {field["name"]}',
          self.value[field["name"]].oneLineStr(),
      )
    return string

  def oneLineStr(self) :
    """A one-line representation of the struct"""
    return self.nescType

  def __deepcopy__(self, memo={}) :
    result = self.__class__()
    memo[id(self)] = result
    self._copyFields(result, memo)
    return result

  def _copyFields(self, other, memo=None):
    other.size = self.size
    other.nescType = self.nescType
    other.cType = self.cType
    other.pythonType = self.pythonType
    if memo is None:
      other.value = deepcopy(self.value)
      other.fields = deepcopy(self.fields)
    else:
      other.value = deepcopy(self.value, memo)
      other.fields = deepcopy(self.fields, memo)
    other.__initialized = True

  def _parseXMLFields(self, nescTypes, xmlDefinition):
    """Create a list of fields & values given a struct xml declaration."""
    fields = list(xmlDefinition.getElementsByTagName("field"))
    fields.sort( lambda A, B :  int(A.getAttribute("bit-offset")[2:]) - int(B.getAttribute("bit-offset")[2:]))
    for fieldDef in fields:
      field = {"name": fieldDef.getAttribute("name")}
      field["bitOffset"] = int(fieldDef.getAttribute("bit-offset")[2:])
      if fieldDef.hasAttribute("bit-size"):
          field["bitSize"] = int(fieldDef.getAttribute("bit-size")[2:])
      elif fieldDef.hasAttribute("size"):
          field["bitSize"] = int(fieldDef.getAttribute("size")[2:])*8
      self.fields.append(field)
      self.value[fieldDef.getAttribute("name")] = nescTypes.getTypeFromXML(fieldDef)
    #here's a weird bug in the nesc.xml generation where the "size" attribute
    #for packed structs is actually the size of the unpacked struct.
    if xmlDefinition.hasAttribute("packed") :
      self.size = self.packedSize()
    elif xmlDefinition.getAttribute("size")[2:]:
      self.size = int(xmlDefinition.getAttribute("size")[2:])
    else:
      self.size = 0
  def _parseNescTypeFields(self, fields) :
    """Create a list of fields & values given a tuple of
    fieldname,value sequences."""
    self.size = 0
    for fieldDef in fields:
      field = {}
      (field["name"],fType) = fieldDef
      field["bitOffset"] = self.size*8
      field["bitSize"] = fType.size*8
      self.fields.append(field)
      self.value[field["name"]] = fType
      self.size += fType.size
  
  def isType(self, xmlDefinition):
    """returns 1 if the xml definition describes this type.
    Returns 0 otherwise."""
    if xmlDefinition is None:
      return 0
    child = getUniqueChild(xmlDefinition)
    if ( ( xmlDefinition.tagName == "struct" and
           xmlDefinition.getAttribute("name") == self.nescType) or
         ( xmlDefinition.tagName == "type-tag" and child != None and 
           child.tagName == "struct-ref" and
           child.getAttribute("name") == self.nescType ) ) :
      return 1
    else :
      return 0

  def getBytes(self) :
    """Hexidecimal representation of struct"""
    # We have to be careful in here about:
    # 1.  bit fields (ie. bitSize shorter than nominal type size)
    # 2.  packing (ie. bits that are not part of any particular field)
    bits = ""
    for field in self.fields :
      for i in range(len(bits), field["bitOffset"]) :
        bits += "0"
      newBits = hex2bin(self.value[field["name"]].getBytes())
      bits += newBits[-field["bitSize"]:]
      #the following loop is just type checking for bit fields.  Can we do this on setattr?
      for i in range(len(newBits)-field["bitSize"]):
          if newBits[i] == "1":
              print "Bit-field type error: value of %s.%s being truncated" % (self.nescType,
                                                        field["name"])
    for i in range(len(bits), self.size*8) :
      bits += "0"
    bytes = bin2hex(bits)
    if len(bytes) != self.size:
      raise Exception("Byte conversion error: %s %d bytes to %d" %
                      ( self.nescType, len(bytes), self.size))
    return bytes

  def setBytes(self, bytes):
    """Set all values using hexidecimal representation"""
    # We have to be careful in here about:
    # 1.  bit fields (ie. bitSize shorter than nominal type size)
    # 2.  packing (ie. bits that are not part of any particular field)
    if len(bytes) < self.size:
      raise Exception("Byte conversion error: %s %d bytes to %d" %
                      (self.nescType, len(bytes), self.size) )
    bits = hex2bin(bytes)
    for field in self.fields:
      newBits = "".join("0" for _ in range(self.value[field["name"]].size*8))
      selectedBits=bits[field["bitOffset"]:field["bitOffset"]+field["bitSize"]]
      newBits = newBits[:-field["bitSize"]] + selectedBits
      newBytes = "".join('\x00' for _ in range(self.value[field["name"]].size))
      tmpBytes = bin2hex(newBits)
      newBytes = newBytes[:-len(tmpBytes)] + tmpBytes
      self.value[field["name"]].setBytes(newBytes);
    return bytes[self.size:]

  def packedSize(self):
    if len(self.fields) == 0:
      return 0
    a,b,lastField = self._findLastNestedField()
    return (lastField["bitOffset"] + lastField["bitSize"]) /8

  def _findLastNestedField(self) :
    lastField = self
    parents = []
    #find the last (possibly nested) field
    while issubclass(type(lastField), nescStruct) and len(lastField.fields) > 0 :
      parent = lastField
      lastFieldDef = parent.fields[-1]
      lastField = parent.value[lastFieldDef["name"]]
      parents.append( parent )
    return (lastField, parents, lastFieldDef)





class TosMsg ( nescStruct ) :
    """A python representation of a TosMsg.
    Is a nescStruct object.
    Can be used with
    pytos.comm.send, pytos.comm.register, pytos.comm.unregister.
    
    usage:
    msg = TosMsg(amType)
    msg = TosMsg(amType, nescStruct)
    msg = TosMsg(amType, <nescStruct constructor args>)
    print msg
    msg.field = X
    comm.send(msg)
    comm.register(msg, f)
    comm.unregister(msg, f)
    migMsg = msg.createMigMsg()
    msg.parseMigMsg(migMsg)
    """

    def __init__(self, amType, *varargs):
        self.amType = amType
        self.parentMsg = None
        #if this is a nescStruct argument, make myself a clone of it
        if len(varargs) == 1 and issubclass(type(varargs[0]), nescStruct) :
            nescStruct._copyFields(varargs[0],self)
        #otherwise, make myself into a struct with the struct args
        elif len(varargs) >= 1:
            nescStruct.__init__(self, *varargs)

    def __deepcopy__(self, memo={}) :
      result = self.__class__(self.amType)
      memo[id(self)] = result
      self._copyFields(result, memo)
      result.parentMsg = deepcopy(self.parentMsg, memo)
      return result

    def getParentMsg(self, amOrName):
      """This function will get the parent message with the amType or name specified"""
      if self.parentMsg is None:
        return None
      elif self.parentMsg.nescType == amOrName or self.parentMsg.amType == amOrName :
        return self.parentMsg
      else:
        return self.parentMsg.getParentMsg(amOrName)
      
    def createMigMsg(self):
      """Returns a java BaseTOSMsg with same amType and length
        and with data payload of same bytes"""
      Message = tinyos.message.Message()
      msg = Message(self.size)
      msg.dataSet(unpack(f'{str(self.size)}b', self.getBytes()))
      msg.amTypeSet(self.amType)
#        msg.set_type( self.amType )
#        msg.set_length(self.size)
      return msg

    def parseMigMsg(self, msg):
      """Takes a java BaseTOSMsg and creates TosMsg
        with same amType and length and with data payload of same bytes"""
      self.amType = msg.amType()
      data = list(msg.dataGet())
      self.setBytes(pack(f'{len(data)}b', *data))

    def __repr__(self) :
      return "%s object at %s:\n\n\t%s" % (self.__class__, hex(id(self)), str(self))
      
    def __str__(self) :
        """All fields and values as a readable string"""
        return "TosMsg(am=%d) " % self.amType + nescStruct.__str__(self)
        
    def setBytes(self, bytes):
      """Extend this msg to be longer, if necessary to accomodate extra data.
        This only happens if the last field is a nescArray of length 0.
        Unlike nescStructs, TosMsg objects are not nested recursively, so it is
        Ok to do this."""
      if len(bytes) > self.size: #trueSize() :
        #print "there are more bytes than fit in this msg... trying to grow msg"
        lastField, parents,b = self._findLastNestedField()
            #see if it is an array of size 0
        if type(lastField) == nescArray and lastField.len == 0:
          #make it bigger
          #print "last field is nescArray[0]... growing"
          lastFieldSize = lastField.elementType.size
          numExtraBytes = len(bytes) - self.size #trueSize()
          if numExtraBytes % lastFieldSize == 0:
              requiredArraySize = int( numExtraBytes/lastFieldSize )
              lastField = nescArray(requiredArraySize, lastField.elementType)
          #print "new size is %d" % numExtraBytes
          #and set it, changing the size of all parent structs
          parents.reverse()
          for parent in parents :
#                    trueSize = parent.trueSize()
              parent.value[parent.fields[-1]["name"]] = lastField
              parent.fields[-1]["bitSize"] = lastField.size*8
              parent.size = self.packedSize()# + lastField.size
              lastField = parent
      #make sure everything worked out correctly and call parent's function
      if len(bytes) != self.size :#trueSize() :
          raise Exception("Incorrect number of bytes for TosMsg. Byte conversion error: %s %d bytes to %d" % ( self.nescType, len(bytes), self.size) )
      #print "passing to child to set bytes."
      nescStruct.setBytes(self,bytes)







def getUniqueChild(xmlDefinition):
  return next(
      (childNode
       for childNode in xmlDefinition.childNodes if childNode.nodeType == 1),
      None,
  )

def bin2hex(bits):
  return "".join(pack('B',int(bits[i:i+8],2)) for i in range(0, len(bits), 8 ))

def hex2bin(bytes) :
    bits = ""
    for i in range(len(bytes)) :
        val, = unpack('B',bytes[i])
        for j in range(7,-1,-1):
            if val>= pow(2,j):
                bits += "1"
                val -= pow(2,j)
            else :
                bits += "0"
    return bits


def TestAppTypes() :
    testRpc = appTypes('/home/kamin/tinyos-1.x/contrib/hood/apps/TestRpc/build/telosb/nesc.xml')
    print testRpc
    
if __name__ == "__main__": TestAppTypes()
