#  2 2 20 1 1 15
# dp[i][k] = max amount reached till that index for that particular k

# index/k  0  1  2  3
#   0      0  0  0  0
#   1      0  2  2  20
#   2      0  2  22 40 
#   3      0  20 42 60
#   4      0  1  40
#   5      0
#   6      0

# example - 2
# 1 15 7 9 2 5 10

# index/k  0  1  2  3  4
#   0      0  0  0  0  0
#   1      0  1  1  1  1
#   2      0  16 30 30 30
#   3      0  23 37 45 45
#   4      0  32 48
#   5      0  34 
#   6      0  39 
#   7 

# 46
# 18 + 30 = 48
# dp[i(cows)][k(team_length)] = for t_l in range(1,k+1) :
#                                  max(arr[i-t_l:i])*t_l + dp[i-t_l][k]


#Dp table
# 0 1 30 45 54 63 64 84 
 
import sys

sys.stdin = open("teamwork.in", "r")
sys.stdout = open("teamwork.out", "w")

n, k = map(int, input().split())
arr = []
for i in range(n):
    x = int(input())
    arr.append(x)
dp = [0]*(n+1)

for i in range(1, n+1):
    ans = 0
    prev_max = arr[i-1]
    for t_l in range(1, min(i+1,k+1)):
        prev_max = max(prev_max, arr[i-t_l])
        ans = max(ans, prev_max*t_l + dp[i-t_l])
        # print(prev_max, i, t_l)
        
    dp[i] = ans
# print(dp)
print(dp[-1])
            
        
        
