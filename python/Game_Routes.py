# topo sort function
import sys
sys.setrecursionlimit(10**6)
n, m = map(int, input().split())
adj = {i:[] for i in range(n)}
for i in range(m):
    x, y = map(int, input().split())
    x-=1
    y-=1
    adj[x].append(y)
    

def toposort():
    stack = []
    visited = set()
    recur_stack = set()
    def dfs(visited, node):
        if node in recur_stack:
            return(0)
        if node in visited:
            return
        visited.add(node)
        recur_stack.add(node)
        for neigh in adj[node]:
            dfs(visited, neigh)
        recur_stack.remove(node)
        stack.append(node)
    for i in range(n):
        if i not in visited:
            dfs(visited, i)
    return stack[::-1]

stack = toposort()
# print(stack)
# print(adj)
MOD = 10**9+7
dp = [0 for i in range(n)]
dp[0] = 1
for i in stack:
    for neigh in adj[i]:
        dp[neigh] = (dp[neigh] + dp[i])%MOD
print(dp[-1])