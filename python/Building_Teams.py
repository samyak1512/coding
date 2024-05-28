from collections import deque

def is_bipartite(n, adj):
    odd = [0] * n

    def bfs(start):
        q = deque([start])
        odd[start] = 1  # Start with one set
        while q:
            node = q.popleft()
            for neighbor in adj[node]:
                if odd[neighbor] == 0:  # If neighbor is unvisited
                    odd[neighbor] = -odd[node]  # Assign opposite set
                    q.append(neighbor)
                elif odd[neighbor] == odd[node]:  # If neighbor has the same set
                    return False
        return True

    for i in range(n):
        if odd[i] == 0:  # If node i is unvisited
            if not bfs(i):
                return "IMPOSSIBLE"

    return odd


n, m = map(int, input().split())
adj = {i: [] for i in range(n)}

for _ in range(m):
    a, b = map(int, input().split())
    adj[a-1].append(b-1)
    adj[b-1].append(a-1)

result = is_bipartite(n, adj)
if result == "IMPOSSIBLE":
    print(result)
else:
    for i in range(len(result)):
        if result[i] == -1:
            result[i] = 2
    print(*result)
            
