n, m = map(int, input().split())
adj = {}
for i in range(n):
    adj[i] = []
for i in range(m):
    for i in range(n):
        x, y = map(int, input().split())
        adj[x] = y
        adj[y] = x
        
    
    