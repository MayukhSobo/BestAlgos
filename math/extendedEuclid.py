"""
This shows how to solve for x & y
if 
   Ax + By = C 
is given and 

	C = gcd(A, B)
"""


def gcd(a, b):
	x = [1, 0]
	y = [0, 1]
	while b:
		q = a / b
		temp = b
		b = a % b
		a = temp
		_x = x[0] - (x[1] * q)
		x[0] = x[1]
		x[1] = _x

		_y = y[0] - (y[1] * q)
		y[0] = y[1]
		y[1] = _y
	return [x[0], y[0]]


if __name__ == '__main__':
	print gcd(240, 46)
