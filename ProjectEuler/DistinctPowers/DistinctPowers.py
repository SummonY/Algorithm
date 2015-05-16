#!/usr/bin/python

terms = []

for a in range(2, 101):
    for b in range(2, 101):
        tmp = a ** b
        if tmp not in terms:
            terms.append(tmp)
print len(terms)

print len(set(a ** b for a in range(2, 101) for b in range(2, 101)))
