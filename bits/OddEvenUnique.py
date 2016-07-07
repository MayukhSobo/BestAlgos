def oddOccuringElems(ele):
    preset = 0
    _xor = 0
    for each in ele:
        preset |= (1 << each)
        _xor ^= (1 << each)
    preset = bin(preset)[2::]
    _xor = bin(_xor)[2::]
    print preset
    print _xor
    for i in xrange(len(_xor) -1, -1, -1):
        if _xor[i] == '1' and preset[i] == '1':
            yield (len(_xor) - 1) -i

def evenOccuringElems(ele):
    preset = 0
    _xor = 0
    for each in ele:
        preset |= (1 << each)
        _xor ^= (1 << each)
    preset = bin(preset)[2::]
    _xor = bin(_xor)[2::]
    print preset
    print _xor
    for i in xrange(len(_xor) -1, -1, -1):
        if _xor[i] == '0' and preset[i] == '1':
            yield (len(_xor) - 1) -i

def unique(ele):
    preset = 0
    for each in ele:
        preset |= (1 << each)
    preset = bin(preset)[2::]
    print preset
    for i in xrange(len(preset) -1, -1, -1):
        if preset[i] == '1':
            yield (len(preset) - 1) - i



# u = unique([1, 2, 3, 4, 1, 2, 3, 4, 2, 1, 2])
# print [each for each in u]
# oe = oddOccuringElems([1, 2, 3, 4, 1, 2, 3, 4, 2, 1, 2, 5, 5, 5])
# print [each for each in oe]
ee = eveOccuringElems([1, 2, 3, 4, 1, 2, 3, 4, 2, 1, 2, 5, 5, 5])
print [each for each in ee]
