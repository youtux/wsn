''' 
 Imports: similar to #include in C/C++
---------------------------------------
 sys: System related python components such as stdout stderr
 TOSSIM: The TOSSIM specific objects 
 random: Python's support for radom number generation
'''
import sys
from TOSSIM import *
from random import *

''' # -------- TASK I - Hello World --------
'''

# A New Simulator Object
t=Tossim([])

# send "my-channel" to to system's standard output 
t.addChannel("my-channel", sys.stdout)

# Configure ndoe with ID 0 to start at random time
m=t.getNode(0)
m.bootAtTime(randint(1,10000))

# run the first event i.e. booting up the node 1
t.runNextEvent()

