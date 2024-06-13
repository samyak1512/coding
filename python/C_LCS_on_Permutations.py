import sys
import bisect

# Read input from stdin
input = sys.stdin.read
data = input().split()

# Constants and initialization
N = 100005
n = int(data[0])
a = [0] * (N)
b = [0] * (N)
c = [0] * (N)
pos = [0] * (N)
lis = []

# Read array a
for i in range(1, n + 1):
    a[i] = int(data[i])
    pos[a[i]] = i  # pos is the inverse of a

# Read array b
for i in range(1, n + 1):
    b[i] = int(data[n + i])

# Compute array c based on the positions from array b
for i in range(1, n + 1):
    c[i] = pos[b[i]]

# Compute LIS on array c
for i in range(1, n + 1):
    p = bisect.bisect_left(lis, c[i])
    if p == len(lis):
        lis.append(c[i])
    else:
        lis[p] = c[i]

print(len(lis))
