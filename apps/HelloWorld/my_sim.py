#! /usr/bin/env python

from TOSSIM import *
from random import *
import sys

t = Tossim([])
t.addChannel("my-channel", sys.stdout)


m = t.getNode(0)
m.bootAtTime(randint(1, 1000000))

while True:
	t.runNextEvent()
