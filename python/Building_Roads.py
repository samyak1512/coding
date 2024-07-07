n, m = map(int, input().split())
adj = {}
for i in range(n):
    adj[i] = []
for i in range(m):
    x, y = map(int, input().split())
    x-=1
    y-=1
    adj[x].append(y)
    adj[y].append(x)
print(adj)

count = 0
new_roads = []

visited = set()
for node in range(n):
    
    
