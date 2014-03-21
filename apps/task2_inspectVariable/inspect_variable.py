#! /usr/bin/env python
''' 
 Imports: what you need
----------
 TOSSIM: The TOSSIM specific objects 
 random: Python's support for radom number generation
 tinyos.tossim.TossimApp: For Inspecting a variable in our Tossim application
'''
from TOSSIM import *
from random import *
from tinyos.tossim.TossimApp import *

'''
# ----------------------- TASK II ------------------ 
 Objectives:    1) Inspecting a varibale from our Nesc Application
#               2) Understand the Discrete Event Simulation
'''

# "app.xml" generated at compile time,contains information about your program
app = NescApp("Inspect Variable App", "app.xml")

#fetch the list of variables
vars = app.variables.variables()
t = Tossim(vars)

n1=t.getNode(1)
n2=t.getNode(2)

# 2 Events i.e booting of the individual nodes has been SCHEDULED to run turn by turn (in a Discrete fasion)  
n1.bootAtTime(randint(1,100))
n2.bootAtTime(randint(100,200))

# Now actually EXCECUTING the scheduled bootup of the nodes
t.runNextEvent()
t.runNextEvent()
# TODO: 1) run while keeping above 2 lines commented (i.e Both nodes not started) -->  InspectVariableC.counter is uintialized(0) for both nodes n1 & n2
# TODO: 2) uncomment the first line and run (node m1 has been booted --1 Discrete event) --> only InspectVariableC.counter for n1 is intialized (10)
# TODO: 3) uncomment both lines and run i.e. both nodes m1 and m2 have been booted (2 Discrete events) -->  InspectVariableC.counter for both n1 and n2 is intialized (10, 20)


# obtain a variable object from node 0
v1 = n1.getVariable("InspectVariableC.counter")
v2 = n2.getVariable("InspectVariableC.counter")

# Fetch the value
print "From Node 1: "  + str(v1.getData())
print "From Node 2: "  + str(v2.getData())
