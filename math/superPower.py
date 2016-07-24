
def powMod(a, b):
	"""
	It will calculate a^b mod 1337
	while b is a single digit number
	"""
	ret = 1
	for i in xrange(b):
		ret = (ret * a) % 1337
	return ret


def superPower(a, b):
	try:
		last = b.pop()
		return powMod(superPower(a, b), 10) * powMod(a, last) % 1337
	except IndexError:
		return 1

print superPower(2, [3])
