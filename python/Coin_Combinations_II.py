n, m = map(int, input().split())
arr = list(map(int, input().split()))

MOD = 1000000007
dp = [0] * (m + 1)
dp[0] = 1

for num in arr:
    for i in range(num, m + 1):
        dp[i] = (dp[i] + dp[i - num]) % MOD

print(dp[m])
