from collections import deque

INT_MAX = 1000000  # Set a sufficiently large value for infinity

# Reading input
n, m = map(int, input().split())  # Number of nodes and edges
adj = [[] for _ in range(n+1)]  # Adjacency list for the graph
dist = [INT_MAX for _ in range(n+1)]  # Distance array initialized to INT_MAX
parent = [-1 for _ in range(n+1)]  # Parent array initialized to -1

# dist = [max, 0, 1, 1, 1, max]
# par = [-1, -1, -1, -1, -1, -1]
# adj = [[], [2, 3, 4], [1, 3], [1, 2], [1, 5], [4]]

# Building adjacency list
for _ in range(m):
    x, y = map(int, input().split())
    adj[x].append(y)
    adj[y].append(x)
# print(adj)
# BFS to find the shortest path
def bfs(start, end):
    q = deque()
    dist[start] = 0
    q.append(start)
    
    while q:
        x = q.popleft()
        for t in adj[x]:
            if dist[t] == INT_MAX:
                dist[t] = dist[x] + 1
                parent[t] = x
                q.append(t)
    
    if dist[end] == INT_MAX:
        return None  # Return None if there's no path from start to end
    else:
        return dist[end]

# Start BFS from node 1 and find the shortest path to node n
shortest_distance = bfs(1, n)

if shortest_distance is None:
    print("IMPOSSIBLE")
else:
    print(shortest_distance + 1)  # Print the number of nodes in the shortest path

    # Reconstruct the path
    path = []
    current = n
    while current != -1:
        path.append(current)
        current = parent[current]
    
    path.reverse()  # Reverse the path to get it from start to end
    print(*path)
