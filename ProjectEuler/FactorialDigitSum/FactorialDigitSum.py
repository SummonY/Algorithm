#!/usr/bin/python

from math import factorial

print sum([int(i) for i in str(factorial(100))])

print reduce(lambda x, y:x + y, [int(i) for i in str(reduce(lambda x, y: x * y, range(1, 101)))])
