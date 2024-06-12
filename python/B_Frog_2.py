n,m = map(int, input().split())
arr = list(map(int, input().split()))

dp = [0] * n
dp[0] = 0
for i in range(1, n):
    dp[i] = min([dp[i-j] + abs(arr[i] - arr[i-j]) for j in range(1, m+1) if i-j >= 0])
print(dp[-1])
    