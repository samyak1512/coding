n, m = map(int, input().split())
adj = {i:[] for i in range(n)}
for _ in range(m):
    x, y = map(int, input().split())
    adj[x-1].append(y-1)

visited = [0] * n  # 0: unvisited, 1: in recursion stack, 2: fully visited
stack = []

def dfs(node):
    if visited[node] == 1:
        cycle = []
        while stack and stack[-1] != node:
            cycle.append(stack.pop() + 1)
        cycle.append(node + 1)
        cycle.reverse()
        print(len(cycle))
        print(*cycle)
        exit()
    if visited[node] == 2:
        return

    visited[node] = 1
    stack.append(node)
    
    for neigh in adj[node]:
        dfs(neigh)
    
    visited[node] = 2
    stack.pop()

for i in range(n):
    if not visited[i]:
        dfs(i)

# If no cycle is found, print the topological order
print("IMPOSSIBLE")