import sys

sys.stdin = open("time.in", "r")
sys.stdout = open("time.out", "w")

n,m,c = map(int, input().split())
earn = list(map(int, input().split()))
adj = {}
for i in range(n):
    adj[i] = []
for i in range(m):
    x, y = map(int, input().split())
    x-=1
    y-=1
    adj[y].append(x)
dp = []
days = 1002
for i in range(days):
    dp.append([0]*n)
dp[0] = ["#" for i in range(n)]
dp[0][0] = 0 # type: ignore
# print(dp)
for i in range(1, days):
    for j in range(n):
        ans = -10**18
        for parent_node in adj[j]:
            if dp[i-1][parent_node]!="#":
                ans = max(ans, earn[j] - c*(2*i-1) + dp[i-1][parent_node])
        if ans == -10**18:
            dp[i][j] = "#"
        else:
            dp[i][j] = ans
final_ans = -10**18
for i in range(len(dp)):
    if dp[i][0] != "#":
        final_ans = max(final_ans, dp[i][0])
print(final_ans)
            
            