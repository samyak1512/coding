n, m = map(int, input().split())
arr = []
for i in range(n):
    arr.append(list(map(int, input().split())))
adj = {}
for i in range(m):
    a, b = map(int, input().split())
    if a in adj:
        adj[a].append(b)
    else:
        adj[a] = [b]
    if b in adj:
        adj[b].append(a)
    else:
        adj[b] = [a]
# print(adj)
