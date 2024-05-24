n, t = map(int, input().split())
arr = list(map(int, input().split()))
count = 0
# arr.sort()
# sum = 0
pref = [0]
for i in range(n):
    pref.append(pref[-1] + arr[i])
# print(pref)

import bisect
ans = 0
for i in range(n):
    d = bisect.bisect_right(pref, pref[i] + t)
    # print(d)
    ans = max(ans, d-i-1)

print(ans)
    
    