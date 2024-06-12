n, m = map(int, input().split())
arr = list(map(int, input().split()))

target = m
dp = [0]*(m+1)
dp[0] = 1
for i in range(1, m+1):
    for j in range(len(arr)):
        if i-arr[j] >= 0:
            dp[i] = (dp[i] + dp[i-arr[j]]) % 1000000007
print(dp)
print(dp[m])