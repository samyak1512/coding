# import sys
# sys.stdin = open('haybales.in', 'r')
# sys.stdout = open('haybales.out', 'w')
n, q = map(int, input().split())
arr = list(map(int, input().split()))

arr.sort()
# print(arr)

def greater_than_or_equal(target):
    # print(arr)
    low = 0
    high = len(arr)-1
    # target = target
    ans = n
    while low <= high:
        mid = low + (high - low)//2
        if arr[mid] == target:
            ans = mid
            break
        if arr[mid] < target:
            # ans = mid
            low =  mid + 1
        if arr[mid] > target:
            ans = mid
            high = mid - 1
    return ans

def less_than_equal(target):
    # print(arr)
    low = 0
    high = len(arr)-1
    # target = target
    ans = -1
    while low <= high:
        mid = low + (high - low)//2
        if arr[mid] == target:
            ans = mid
            break
        if arr[mid] < target:
            ans = mid
            low =  mid + 1
        if arr[mid] > target:
            # ans = mid
            high = mid - 1
    return ans
# print(search(6))
for i in range(q):
    start, end = map(int, input().split())
    print(less_than_equal(end) - greater_than_or_equal(start)+1)