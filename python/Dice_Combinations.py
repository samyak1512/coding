n = int(input())
# state of dp = dp[i] = no of ways from which sum  = i can be achieved
# transition = for k in range(1,6):
                # dp[i] += dp[i-k]
# base case = dp[0] = 0
# answer = dp[n]
dp = [0]*(n+1)
dp[0] = 1
mod = 10**9+7
for i in range(1, n+1):
    for k in range(1, 7):
        if i-k>=0:
            dp[i] += dp[i-k]
            dp[i] %= mod
print(dp[n])
