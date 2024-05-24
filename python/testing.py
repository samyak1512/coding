n, m = map(int, input().split())
adj = {i: [] for i in range(1, n+1)}

for i in range(m):
    x, y = map(int, input().split())
    if x in adj:
        adj[x].append(y)
    else:
        adj[x] = [y]
    if y in adj:
        adj[y].append(x)
    else:
        adj[y] = [x]
# print(adj)
count = 0
visited = set()
ans = []
from collections import deque
q = deque()
def bfs(node):
    visited.add(node)
    q.append(node)
    while q:
        curr_node = q.popleft()
        for i in (adj[curr_node]):
            # print(i, "i")
            if i not in visited:
                q.append(i)
                visited.add(i)
for i in range(1, n+1):
    if i not in visited:
        count+=1
        bfs(i)
        ans.append(i)
        # print(visited, i)
print(count-1)
# print(ans)
for i in range(len(ans)-1):
    print(ans[i], ans[i+1])
                
    
    