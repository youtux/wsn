#! /usr/bin/env python

import pdb
import copy
from pprint import pprint
from datetime import datetime


def color_count(colorlist, color):
	return sum(1 for i in colorlist if i == color)


def parseLine(readl):
	line = readl.split()

	time = str2datetime(line[0])
	node = int(line[2])
	action = line[4]
	data = None
	color = None
	multicast = None

	if action == "send":
		data = int(line[8])
		color = int(line[12])
		multicast = "multicast" if bool(int(line[16])) else "anycast"
	elif action == "status":
		color = int(line[8])
	else:
		data = int(line[8])
	return dict(time=time, node=node, action=action, data=data,
		color=color, multicast=multicast)


def str2datetime(s):
    parts = s.split('.')
    parts[1] = parts[1][:6] # cut string to microseconds

    dt = datetime.strptime(parts[0], "%H:%M:%S")
    return dt.replace(microsecond=int(parts[1]))

statistics = {
	"multicast": {
		"delivered": 0,
		"total": 0,
		"accdelay": 0
	},
	"anycast": {
		"delivered": 0,
		"total": 0,
		"accdelay": 0
	}
}

f = open("data.out", 'r')

colors = []


count = int(f.readline().split()[-1])

colors = [None] * count
print "Count is", count

for i in xrange(0, count):
	readl = f.readline()
	if not readl:
		break
	# [node, action, data, color, multicast] = parseLine(readl)
	l = parseLine(readl)

	if l['action'] != "status":
		print "Error: expected action=status, read", action

	colors[l['node']] = l['color']

data = dict()

while True:
	readl = f.readline()
	if not readl:
		break
	l = parseLine(readl)

	d = l['data']
	#if d == 1101274651:
	#	pdb.set_trace()

	if (d in data
			and data[d] == "send"
			and l['action'] == "send"):
		print "Found a duplicate data value. Let's discard it"

	data[d] = data.get(d, {
		'send_time' : {},
		'destinations' : 0,
		'receive_times' : [],
		'type' : None,
		'color': None
	})

	current = data[d]

	if l['action'] == "send":
		current['type'] = l['multicast']
		current['send_time'] = l['time']
		current['color'] = l['color']

		current['destinations'] = color_count(colors, l['color'])
		
	elif l['action'] == "receive":
		current['receive_times'].append(l['time'])

for k, v in data.items():
	#pdb.set_trace()
	t = v['type']

	if v['destinations'] != 0:
		tsend = v['send_time']
		if t == "multicast":
			for trecv in v['receive_times']:
				statistics[t]['accdelay'] += (trecv - tsend).microseconds

			statistics[t]['total'] += v['destinations']
			statistics[t]['delivered'] += len(v['receive_times'])
		else:
			try:
				trecv = min(v['receive_times'])
				statistics[t]['accdelay'] += (trecv - tsend).microseconds
			except ValueError, e:
				pass

			statistics[t]['total'] += 1
			statistics[t]['delivered'] += 1 if len(['receive_times']) > 0 else 0
			


## old method
# while True:
# 	readl = f.readline()
# 	if not readl:
# 		break
# 	l = parseLine(readl)

# 	#pdb.set_trace()

# 	# print repr(l)
# 	if l['action'] == "send":
# 		skipToNext = False
# 		sent = copy.deepcopy(l)
# 		if sent['multicast'] == "multicast":
# 			statistics['multicast']["total"] += color_count(colors, sent['color'])
# 		else:
# 			statistics['anycast']["total"] += 1 if color_count(colors, sent['color']) else 0

# 		while True:
# 			readl = f.readline()
# 			if not readl:
# 				break
# 			l = parseLine(readl)
# 			# print "\t", repr(l)

# 			if skipToNext:
# 				pass
# 			elif l['action'] == "receive" and sent['data'] == l['data'] and sent['color'] == colors[l['node']]:
# 				statistics[sent['multicast']]["delivered"] += 1
# 				statistics[sent['multicast']]["accdelay"] += (l['time'] - sent['time']).microseconds
# 				# print "\tdelay is", (l['time'] - sent['time']).microseconds / 1000, " ms"

# 				if sent['multicast'] == "anycast":
# 					skipToNext = True
			
# 			if l['action'] != "receive":
# 				# Seek back to the "send" line
# 				f.seek(f.tell() - len(readl))
# 				break

pprint(statistics)

for type in ["multicast", "anycast"]:
	try:
		pdr = float(statistics[type]["delivered"]) / statistics[type]["total"]
		avgdelay = (float(statistics[type]["accdelay"] / 1000)
					/ statistics[type]["total"])
		comments = "(first delivered) " if type == "anycast" else ""

		template = ("{type} statistics:\n"
				"\tPDR is {pdr}\n"
				"\tAverage delay {comments}is {avgdelay}.")
		print template.format(type=type.capitalize(), pdr=pdr,
							  comments=comments, avgdelay=avgdelay)
	except Exception, e:
		pass
