#! /usr/bin/env python

import pdb

f = open("data.dump", 'r')

colors = []

def color_count(colorlist, color):
	return reduce(lambda acc, y: acc + (color == y), colorlist)

def parseLine(readl):
	line = readl.split()

	node = int(line[2])
	action = line[4]
	data = None
	color = None
	multicast = None

	if action == "status":
		color = int(line[8])
	else:
		data = int(line[8])
		if action == "send":
			color = int(line[12])
			if bool(line[16]):
				multicast = "multicast"
			else:
				multicast = "anycast"
	
	return [node, action, data, color, multicast]

count = int(f.readline().split()[-1])

colors = count * [None]
print "Count is", count

for i in xrange(0, count):
	readl = f.readline()
	if not readl:
		break
	[node, action, data, color, multicast] = parseLine(readl)

	if action != "status":
		print "Error: expected action=status, read", action
	colors[node] = color

statistics = {
	"multicast": {
		"delivered": 0,
		"total": 0
	},
	"anycast": {
		"delivered": 0,
		"total": 0
	}
}

while True:
	readl = f.readline()
	if not readl:
		break
	[node, action, data, color, multicast] = parseLine(readl)

	#pdb.set_trace()

	print repr([node, action, data, color, multicast])
	if action == "send":
		sentData = data
		sentColor = color
		sentMulticast = multicast
		statistics[sentMulticast]["total"] += color_count(colors, sentColor)
		while True:
			readl = f.readline()
			if not readl:
				break
			[node, action, data, color, multicast] = parseLine(readl)
			#print "\t", repr([node, action, data, color, multicast])

			if action == "receive" and sentData == data and sentColor == colors[node]:
				statistics[sentMulticast]["delivered"] += 1
			elif action != "receive":
				#print "--- end of receives---"
				#print repr(statistics)
				f.seek(f.tell() - len(readl))
				break

print repr(statistics)
print "Multicast mean is", float(statistics["multicast"]["delivered"])/statistics["multicast"]["total"]
print "Anycast mean is", float(statistics["anycast"]["delivered"])/statistics["anycast"]["total"]