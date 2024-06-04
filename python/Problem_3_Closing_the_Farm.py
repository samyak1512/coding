import sys
from sys import setrecursionlimit

setrecursionlimit(10**9)
sys.stdin = open("closing.in", "r")
sys.stdout = open("closing.out", "w")

n, m = map(int, input().split())
adj = {i: [] for i in range(n)}
for _ in range(m):
    a, b = map(int, input().split())
    adj[a-1].append(b-1)
    adj[b-1].append(a-1)

def dfs(node, visited):
    visited.add(node)
    for neighbor in adj[node]:
        if neighbor not in visited:
            dfs(neighbor, visited)

closing_order = []
for _ in range(n):
    closing_order.append(int(input()) - 1)

remaining_barns = set(range(n))  # Set of all barns initially open

for x in closing_order:
    visited = set()
    if remaining_barns:  # If there are still barns left open
        start_node = next(iter(remaining_barns))  # Get an arbitrary open barn to start DFS
        dfs(start_node, visited)
    
    if visited == remaining_barns:
        print("YES")
    else:
        print("NO")
    
    remaining_barns.remove(x)  # Close the current barn
    for neighbor in adj[x]:
        adj[neighbor].remove(x)
    adj[x] = []  # Clear the adjacency list for the closed barn

