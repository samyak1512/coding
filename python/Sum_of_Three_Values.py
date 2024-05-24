n, x = map(int, input().split())
arr = list(map(int, input().split()))
from collections import defaultdict
mydict = defaultdict(int)

for i in range(n):
    mydict[arr[i]] = i+1

for i in range(n):
    for j in range(i+1, n):
        target = x - arr[i] - arr[j]
        if target in mydict and mydict[target] != i+1 and mydict[target] != j+1:
            print(i+1, j+1, mydict[target])
            exit(0)

print("IMPOSSIBLE")