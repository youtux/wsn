#! /usr/bin/env python

from TOSSIM import *
import sys, StringIO
import random
import os

# The maximum number of lines to load from the noise file.
max_noise_lines = 100

# Creates the network topology from a file containing gain values for each
# pair of nodes. Each line of the file must have the following format:
#
# src_node dest_node link_gain
#
# For instance: 0 5 -90.71
# NOTE: The first node ID is 0.
def load_topology(r, topology_file):
    f = open(topology_file, "r")
    nodes_count = 0

    lines = f.readlines()
    for line in lines: 
        s = line.split() 
        if (len(s) > 0): 
            r.add(int(s[0]), int(s[1]), float(s[2].replace(',', '.')))
            if (int(s[0]) > nodes_count):
                nodes_count = int(s[0])
            if (int(s[1]) > nodes_count):
                nodes_count = int(s[1])
    f.close()

    nodes_count += 1
    print "Found", nodes_count, "nodes";
    return nodes_count


def load_noise(t, nodes_count):
    noiseFile = os.environ["TOSROOT"] + "/tos/lib/tossim/noise/meyer-heavy.txt"
    noise = open(noiseFile, "r")
    lines = noise.readlines()
    lines_cnt = 0
    for line in lines:
        lines_cnt += 1
        if (lines_cnt > max_noise_lines):
            break
        str = line.strip()
        if (str!= ""):
            val = int(str)
            for i in range(0, nodes_count):
                t.getNode(i).addNoiseTraceReading(val)

    for i in range(0, nodes_count):
        print "Creating noise model for", i;
        t.getNode(i).createNoiseModel()


# Configures each node to boot at a random time
def config_boot(t, nodes_count):
    for i in range(0, nodes_count):
        bootTime = random.randint(1, 1000000)
        print "Node", i, "booting at", bootTime;
        t.getNode(i).bootAtTime(bootTime)


def simulation_loop(t, sim_time):
    t.runNextEvent()
    startup_time = t.time()
    while (t.time() < startup_time + sim_time * t.ticksPerSecond()):
        t.runNextEvent()


# Runs a simulatio for sim_time (in seconds) on the network defined in topology_file
def run_simulation(sim_time, topology_file):
    t = Tossim([])
    r = t.radio()
    nodes_count = load_topology(r, topology_file)
    load_noise(t, nodes_count)
    config_boot(t, nodes_count)
# Add channels here. For instance:
    t.addChannel("stdout", sys.stdout)
    simulation_loop(t, sim_time)


# Make a call to run_simulation here
run_simulation(5000, "topology.out")
