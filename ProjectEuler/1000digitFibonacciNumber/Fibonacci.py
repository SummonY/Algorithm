#!/usr/bin/python

A = []

A.append(1)
A.append(1)

i = 2
A.append(A[i - 1] + A[i - 2])
while len(str(A[i])) < 1000:
    i = i + 1
    A.append(A[i - 1] + A[i - 2])
print i + 1
