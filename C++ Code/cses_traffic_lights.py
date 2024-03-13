import sys
import os
from collections import defaultdict
from math import inf
from bisect import bisect_left, bisect_right
from heapq import heappop, heappush
from random import randint, seed
from time import time


x, n = map(int, input().split())
arr = list(map(int, input().split()))
vrr = {0, x}
max1 = {x}
for i in range(n):
    it = bisect_left(sorted(vrr), arr[i])
    it1 = it - 1
    c1 = sorted(vrr)[it] - sorted(vrr)[it1]
    vrr.add(arr[i])
    max1.remove(c1)
    max1.add(arr[i] - sorted(vrr)[it1])
    max1.add(sorted(vrr)[it] - arr[i])
    it4 = max(max1)
    print(it4, end=" ")
print()

