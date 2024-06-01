n = int(input())
adj = {i: [] for i in range(n)}
for i in range(n-1):
    a, b = map(int, input().split())
    adj[a-1].append(b-1)
    adj[b-1].append(a-1)

def dfs(v, l):
    global max_length, max_node
    visited.add(v)
    