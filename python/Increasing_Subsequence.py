n = int(input())
arr = list(map(int, input().split()))

dp = [1 for i in range(n+1)]
# print(dp)
for i in range(1, n+1):
    for j in range(i-1, 0, -1):
        if arr[j-1]<arr[i-1]:
            dp[i] = max(dp[i], dp[j]+1)
           
# print(dp)
print(max(dp))