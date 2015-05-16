#!/usr/bin/python

"""first method"""
maxv = 0
for a in range(1, 101):
    for b in range(1, 101):
        value = a ** b
        length = len(str(value))
        sumv = 0
        for i in range(0, length):
            sumv += int(str(value)[i])
        if sumv > maxv:
            maxv = sumv
print maxv

"""second method"""
print max([sum([int(j) for j in str(a ** b)]) for a in range(1, 101) for b in range(1, 101)])

"""third method"""
print max(map(lambda x: sum(int(c) for c in str(x)), set(a ** b for a in range(1, 101) for b in range(1, 101))))
