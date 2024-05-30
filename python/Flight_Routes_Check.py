n, m = map(int, (input().split()))
adj = {}
for i in range(m):
    adj[i] = []
for i in range(m):
    x, y = map(int, input().split())
    adj[x-1].append(y-1)
    

def dfs(node):
    visited.add(node)
    for i in adj[node]:
        if i not in visited:
            dfs(i)

myset = ()
for i in range(n):
    visited = ()
    
    
    
    
    
