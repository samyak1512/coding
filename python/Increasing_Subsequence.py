# this is O(n^2) solution due to 2 nested loops

# n = int(input())
# arr = list(map(int, input().split()))

# dp = [1 for i in range(n+1)]
# # print(dp)
# for i in range(1, n+1):
#     for j in range(i-1, 0, -1):
#         if arr[j-1]<arr[i-1]:
#             dp[i] = max(dp[i], dp[j]+1)
           
# # print(dp)
# print(max(dp))

# this solution uses binary search to maintain and insert a sorted arr
# TC: O(nlogn)
# striver video
from bisect import bisect_left
n = int(input())
arr = list(map(int, input().split()))
temp = []
temp.append(arr[0])
for i in range(1, len(arr)):
    if arr[i]>temp[-1]:
        temp.append(arr[i])
    else:
        pos = bisect_left(temp, arr[i])
        temp[pos] = arr[i]
# print(temp)
print(len(temp))
    