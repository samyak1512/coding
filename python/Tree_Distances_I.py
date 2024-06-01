import sys
sys.setrecursionlimit(10**5)

n = int(input())
adj = {i: [] for i in range(n)}
for i in range(n-1):
    a, b = map(int, input().split())
    adj[a-1].append(b-1)
    adj[b-1].append(a-1)

def dfs(v, l):
    global max_length, max_node
    visited.add(v)
    for nei in adj[v]:
        if nei not in visited:
            dfs(nei, l+1)
    if l > max_length:
        max_length = l
        max_node = v
def distance_finder(node1, node2):
    global length
    
    
max_length = 0
max_node = 0
visited = set()
# first dfs
dfs(0, 0)
a = max_node
# second dfs
max_length = 0
max_node = 0
visited = set()
dfs(max_node, 0)
b  = max_node
diamter = max_length
for i in range(n):
    max_length = 0
    max_node = 0
    visited = set()
    dfs(i, a)
    dist1 = max_length
    dfs(i, b)
    dist2 = max_length
    print(max(dist1, dist2), end=' ')