#!/usr/bin/python

import numpy as np

counts = 0

for y in range(1, 10):
    count = np.floor(np.log10(10) / (np.log10(10) - np.log10(y)))
    counts += count

print "counts = %d" % (counts)
