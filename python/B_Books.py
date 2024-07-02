# n, t = map(int, input().split())
# arr = list(map(int, input().split()))
# count = 0
# # arr.sort()
# # sum = 0
# pref = [0]
# for i in range(n):
#     pref.append(pref[-1] + arr[i])
# # print(pref)

# import bisect
# ans = 0
# for i in range(n):
#     d = bisect.bisect_right(pref, pref[i] + t)
#     # print(d)
#     ans = max(ans, d-i-1)

# print(ans)

# pervious solution

n, t = map(int, input().split())
arr = list(map(int, input().split()))
count = 0
pref = [0]
for i in range(0, n):
    pref.append(pref[-1]+arr[i])
# print(pref)
max_length = 0
l = 0
for r in range(n):
    while pref[r+1]-pref[l]>t and l<r:
        l+=1
    if pref[r + 1] - pref[l] <= t:
        max_length = max(max_length, r - l + 1)
    # print(r, l)
    
print(max_length)
    
    