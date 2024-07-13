n, m, c = map(int, input().split())
cities = list(map(int, input().split()))
adj = {}
for i in range(n):
    adj[i] = []
for i in range(m):
    x, y = map(int, input().split())
    x-=1
    y-=1
    adj[x].append(y)
print(adj)

# dp[i][j] = max money we can make at the ith day if we land on
#city j
# transition = 