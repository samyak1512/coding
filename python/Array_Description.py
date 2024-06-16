n, m = map(int, input().split())
arr = list(map(int, input().split()))

dp = [0 for i in range(m+1) for i in range(n+1)]
# dp[i][k] = no of prefix of length i that have the last number of that prefix = k
# transitition = dp[i][k] = dp[i-1][k-1] + dp[i-1][k] + dp[i-1][k+1]\
# base case = dp[1][k] = 1 if arr[0] = 0 or arr[0] = k
# final problem = dp[n][1] + dp[n][2] .... dp[n][m]

for i in range(1, m+1):
    for for i in range(2, n+1):
    for k in range(1, m+1):
        if arr[i-1]!=0 and arr[i-1]!=k:
            dp[i][k] = 0
            continue
    
        for prev in range(k-1, k+2):
            if not valid(prev, m):
                continue
            dp[i][k] = (dp[i][k] + dp[i-1][prev])%(10**9+7)
ans = 0
for i in range(1, m+1):
    ans = (ans + dp[n][i])%(10**9+7)
print(ans