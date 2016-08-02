def repeatedSubstring(data):
	subs = data.split(data[0])[1::]
	pattern = subs[0]
	if len(subs) == 1:
		return False
	for each in subs:
		if each != pattern:
			return False
	return data[0] + pattern

print repeatedSubstring("abcdabab")
