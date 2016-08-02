pattern1 = "aabcaaa"
pattern2 = "aabbaaa"
string = "aabbbdcdssvvaabcaaacccbbbaabababaccbbaa"


def populate_prefix(patt):
	table = [0]
	i = 0
	j = 1
	while j != len(patt):
		if patt[j] == patt[i]:
			table.append(i + 1)
			j += 1
			i += 1
		else:
			if i == 0:
				table.append(0)
				j += 1
			else:
				i = table[i - 1]
	return table


def KMP(text, pattern):
	table = populate_prefix(pattern)
	j = 0
	i = 0
	while j != len(text):
		if text[j] == pattern[i]:
			if i == len(pattern) - 1:
				return j - len(pattern) + 1
			else:
				i += 1
				j += 1
		else:
			if i != 0:
				i = table[i - 1]
			else:
				j += 1
	return -1
print KMP(string, pattern1)
