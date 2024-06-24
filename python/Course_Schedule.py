import sys

sys.setrecursionlimit(10**6)
adj = {}
n, m = map(int, input().split())
adj = {}
for i in range(n):
    adj[i] = []
for i in range(m):
    x, y = map(int, input().split())
    x -= 1
    y -= 1
    adj[x].append(y)

stack = []
rec_stack = set()  # New: for cycle detection

def dfs(visited, node):
    if node in rec_stack:  # New: cycle detection
        print("IMPOSSIBLE")
        exit()
    if node in visited:
        return
    visited.add(node)
    rec_stack.add(node)  # New: add to recursion stack
    if len(adj[node]):
        for neigh in adj[node]:
            dfs(visited, neigh)
    rec_stack.remove(node)  # New: remove from recursion stack
    stack.append(node)

visited = set()
for i in range(n):
    if i not in visited:
        dfs(visited, i)
for i in range(len(stack)):
    stack[i]+=1
print(*stack[::-1])