import sys
sys.stdin = open('angry.in', 'r')
sys.stdout = open('angry.out', 'w')
n, k = map(int, input().split())
arr = []
for i in range(n):
    x = int(input())
    arr.append(x)
arr.sort()
# print(arr)

def possible(radius):
    intial_point = arr[0]
    cows = 1
    intial_launch = arr[0] + radius
    curr_launch = intial_launch
    for i in range(0, len(arr)):
        if arr[i]>=curr_launch - radius and arr[i]<=curr_launch+radius:
            continue
        else:
            curr_launch = arr[i] + radius
            cows+=1
    if cows>k:
        return False
    return True

def binary_searh(hi, lo):
    ans = 0
    while hi>=lo:
        mid = (hi+lo)//2
        if possible(mid):
            ans = mid
            hi = mid - 1
        else:
            # ans = mid
            lo = mid + 1
    return ans
print(binary_searh(10**18, 0))
            