from __future__ import print_function
import numpy as np
radius = 5.0
shoot = (radius * radius - radius, radius * radius + radius)
# print (shoot)
# offset = 2
# print " " * (radius + offset) + "."
for x in np.arange(radius, -radius - 1, -1):
	for y in np.arange(-radius, radius + 1):
		if x * x + y * y >= shoot[0] and x * x + y * y < shoot[1]:
			print(" *", end="")
		else:
			print("  ", end="")
	print("")
