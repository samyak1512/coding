n = int(input())
arr = list(map(int, input().split()))
dp = [10**9]*n
dp[0] = 0
# state = max cost incurred till now
# transition = min()
for i in range(1, n):
    if i-1>=0:
        dp[i] = dp[i-1] + abs(arr[i] - arr[i-1])
    if i-2>=0:
        dp[i] = min(dp[i], dp[i-2] + abs(arr[i] - arr[i-2]))
print(dp[n-1])
    