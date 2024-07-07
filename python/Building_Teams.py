# from collections import deque

# def is_bipartite(n, adj):
#     odd = [0] * n

#     def bfs(start):
#         q = deque([start])
#         odd[start] = 1  # Start with one set
#         while q:
#             node = q.popleft()
#             for neighbor in adj[node]:
#                 if odd[neighbor] == 0:  # If neighbor is unvisited
#                     odd[neighbor] = -odd[node]  # Assign opposite set
#                     q.append(neighbor)
#                 elif odd[neighbor] == odd[node]:  # If neighbor has the same set
#                     return False
#         return True

#     for i in range(n):
#         if odd[i] == 0:  # If node i is unvisited
#             if not bfs(i):
#                 return "IMPOSSIBLE"

#     return odd


# n, m = map(int, input().split())
# adj = {i: [] for i in range(n)}

# for _ in range(m):
#     a, b = map(int, input().split())
#     adj[a-1].append(b-1)
#     adj[b-1].append(a-1)

# result = is_bipartite(n, adj)
# if result == "IMPOSSIBLE":
#     print(result)
# else:
#     for i in range(len(result)):
#         if result[i] == -1:
#             result[i] = 2
#     print(*result)

# previous solution

n,m = map(int, input().split())
adj = {}
for i in range(n):
    adj[i] = []
for i in range(m):
    x, y = map(int, input().split())
    x-=1
    y-=1
    adj[x].append(y)
    adj[y].append(x)
from collections import deque
def isBartpite():
    colour = [0]*n
    def bfs(start):
        q = deque()
        q.append(start)
        colour[start] = 1
        while q:
            node = q.popleft()
            for niegh in adj[node]:
                if colour[niegh] == 0:#unvisited node
                    colour[niegh] = -colour[node]
                    q.append(niegh)
                elif colour[niegh] == colour[node]:
                    return False
        return True
    for i in range(n):
        if colour[i] == 0:
            if not bfs(i):
                return "IMPOSSIBLE"
    return colour

x = isBartpite()
if x != "IMPOSSIBLE":
    for i in range(len(x)):
        if x[i] == -1:
            x[i] = 2
    print(*x)          
else:
    print(x)  
                    
        
    
