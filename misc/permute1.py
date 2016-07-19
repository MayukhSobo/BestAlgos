# from __future__ import print_function
ch = ['a', 'b', 'c', 'd']
perms = []
N = 1 << len(ch)
form = '{0:0' + str(len(ch)) + 'b}'
for i in xrange(1, N):
	binary = form.format(i)
	# print binary
	temp = ""
	for j in xrange(len(binary)):
		if binary[j] == '1':
			temp += ch[j]
	perms.append(temp)
print perms


# OUTPUT: ['d', 'c', 'cd', 'b', 'bd', 'bc', 'bcd', 'a', 'ad', 'ac', 'acd', 'ab', 'abd', 'abc', 'abcd']