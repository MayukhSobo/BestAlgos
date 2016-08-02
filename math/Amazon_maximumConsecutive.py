def maxConsecutive(a):
	# a = [1, 94, 93, 1000, 2, 92, 1001]
	a.sort()
	consecutive = 0
	prev = a[0]
	m = consecutive
	for each in a[1::]:
		if each == prev + 1:
			consecutive += 1
		else:
			if consecutive != 0:
				if m < consecutive + 1:
					m = consecutive + 1
			consecutive = 0
		prev = each
	return m


if __name__ == '__main__':
	print maxConsecutive([1, 94, 93, 1000, 2, 92, 1001])
