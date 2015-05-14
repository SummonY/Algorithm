#!/usr/bin/python

def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n - 1)

sum = 0

for n in range(10, 1000000):
    tmp = 0
    for i in str(n):
        tmp += factorial(int(i))
    if n == tmp:
        print n
        sum += n

print "sum = %d" % (sum)
