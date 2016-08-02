# Babylonian method for square root....sqrt(n)

# We first initialize y = 1
# Put x = n
# calculate the average of x and y and store it to x...x = (x + y) / 2
# Do y = n / x
# Repeat the process as long as x - y is not very very small


def squareRoot1(n):
	x = float(n)
	y = 1.0
	while x - y > 0.000001:
		x = (x + y) / 2.0
		y = n / x
	return x

print squareRoot1(4)


# Square root using Binary Search

def squareRoot2(a, b=0):
	mid = (a + b) / 2
	if mid * mid == a:
		return mid
	elif mid * mid < a:
		return squareRoot2(a, mid + 1)
	else:
		return squareRoot2(mid - 1, b)

print squareRoot2(6)
