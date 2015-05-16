#!/usr/bin/python

import numpy as np

fp = open("./triangle.txt", "r")

length = 0
array = [[] for i in range(15)]
for line in fp.readlines():
    rowList = list(line.strip().split(" "))
    for i in range(len(rowList)):
        array[length].append(int(rowList[i]))
    length += 1

for i in np.arange(13, -1, -1):
    for j in np.arange(0, i + 1):
        dw = array[i][j] + array[i + 1][j]
        dwr = array[i][j] + array[i + 1][j + 1]
        if dw > dwr:
            array[i][j] = dw
        else:
            array[i][j] = dwr

print array[0][0]

