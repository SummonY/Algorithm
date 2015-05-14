#!/usr/bin/python

sum = 0

for n in range(2, 1000000):
    tmp = 0
    for i in range(0, len(str(n))):
        tmp += pow(int(str(n)[i]), 5)
    if n == tmp:
        sum += n

print "sum = %d" % (sum)
