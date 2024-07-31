import sys
sys.stdin = open("snakes.in", "r")
sys.stdout = open("snakes.out", "w")
n, k = map(int, input().split())
groups = list(map(int, input().split()))
groups.insert(0, 0)
# print(groups)
# state = dp[i][j] = the min sum of net sizes catching i snakes
# after j resizings
dp = []
for i in range(n+1):
    dp.append([0]*(k+1))
# dp table
# snakes/resizings  0    1   2
#       0           0    0   0
#       1           7*1  7   7
#       2           9*2  16  16
#       3           9*3  
#       4           9*4
#       5           9*5
#       6           9*6
for i in range(n+1):
    dp[i][0] = max(groups[:i+1])*i
# [[0, 0, 0], 
#  [7, 7, 7], 
#  [18, 16, 16], 
#  [27, 25, 24], 
#  [36, 29, 27], 
#  [45, 33, 31], 
#  [54, 36, 34]]
# print()
for j in range(1, k+1):
    for i in range(1, n+1):
        ans = float('inf')
        for c in range(i-1, -1, -1):
            ans = min(ans, dp[c][j-1] + max(groups[c+1:i+1])*(i-c))
        dp[i][j] = ans
# print(dp)
print(dp[-1][-1] - sum(groups))