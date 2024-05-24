import sys
sys.stdin = open("diamond.in", "r")
sys.stdout = open("diamond.out", "w")

n, k = map(int, input().split())
arr = [int(input()) for _ in range(n)]

arr.sort()
# print(arr)

def hola(arr, k):
    max_l = 0
    l = 0
    new_l = 0
    new_r = 0
    
    for r in range(len(arr)):
        while arr[r] - arr[l] > k:
            l += 1
        curr_l = r - l + 1
        if curr_l > max_l:
            max_l = curr_l
            new_l, new_r = l, r
    
    return max_l, new_l, new_r
    
# Find the first interval
ans1, l1, r1 = hola(arr, k)
# print(ans1, l1, r1)

# Delete the first interval from the list
arr = arr[:l1] + arr[r1+1:]

# Find the second interval
ans2, l2, r2 = hola(arr, k)

# Total count is the sum of both intervals
print(ans1 + ans2)
