n = int(input())
grid = []
for i in range(n):
    grid.append(input())
dp = [[0 for i in range(n+1)] for j in range(n+1)]
# for i in range(n+1):
#     dp[i][0] = 1
# for j in range(n+1):
#     dp[0][j] = 1
dp[0][0] = 1
dp[1][1] = 1
for i in range(1, n+1):
    for j in range(1, n+1):
        if grid[i-1][j-1]=='*':
            dp[i][j] = 0
        else:
            dp[i][j] = (dp[i][j]+ dp[i-1][j] + dp[i][j-1])%(10**9+7)
            # if dp[i-1][j]:
            #     dp[i][j]+=1
            # if dp[i][j-1]:
            #     dp[i][j]+=1
print(dp[n][n])
        