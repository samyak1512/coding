n, x = map(int, input().split())
arr = list(map(int, input().split()))
from collections import defaultdict
mydict = set()

for i in range(n):
    if x-arr[i] in mydict:
        print(i+1, arr.index(x-arr[i])+1)
        break
    else:
        mydict.add(arr[i])
else:
    print("IMPOSSIBLE")
    