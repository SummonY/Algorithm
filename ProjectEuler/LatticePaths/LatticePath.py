#!/usr/bin/python

def factorial(n):
    if 1 == n:
        return 1
    return n * factorial(n - 1)

print (factorial(2 * 20) / (factorial(20) * factorial(20)))
