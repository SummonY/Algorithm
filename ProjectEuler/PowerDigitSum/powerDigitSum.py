#!/usr/bin/python

print sum(map(int, list(str(2 ** 1000))))
print reduce(lambda x, y: x + y, [int(i) for i in str(2 ** 1000)])

string =  str(pow(2, 1000))

sum = 0
for i in string:
    sum += int(i)

print sum
