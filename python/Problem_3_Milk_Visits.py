n,m  = map(int, input().split())
s = list(input())
adj = {i: [] for i in range(0, n)}
for i in range(n-1):
    a,b = map(str,  input().split())
    a = int(a)
    b = int(b)
    adj[a-1].append(b-1)
    adj[b-1].append(a-1)

print(adj)

for i in range()