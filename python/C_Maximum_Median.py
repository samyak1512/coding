import math
n, k = map(int , input().split())
arr = list(map(int, input().split()))
arr.sort()


def operations_required(median):
    hola = 0
    for i in range((n-1)//2 , n):
        hola += max(0, median - arr[i])
    return hola
low = 0
high = 10**18
target = k

ans = 0
while low <= high:
    mid = low + (high - low)//2
    if operations_required(mid) == target:
        ans = mid
        break
    if  operations_required(mid) < target:
        ans = mid
        low =  mid + 1
    if operations_required(mid) > target:
        # ans = mid
        high = mid - 1
print(ans)


