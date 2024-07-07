# from typing import List, Set

# n, m = map(int, input().split())

# forward_graph = [[] for _ in range(n)]
# reverse_graph = [[] for _ in range(n)]

# for _ in range(m):
# 	a, b = map(int, input().split())
# 	forward_graph[a - 1].append(b - 1)
# 	reverse_graph[b - 1].append(a - 1)


# def dfs(graph: List[List[int]]) -> Set[int]:
# 	"""
# 	Performs a depth-first traversal of a graph starting from node 0. Removes
# 	each node reached from a set of all nodes. Once complete, the set will only
# 	contain unvisited nodes and is then returned.

# 	:param graph: An adjacency list representing a graph.
# 	:return: A set containing all unvisited nodes in the depth-first traversal.
# 	"""
# 	unvisited = set(range(1, n))
# 	stack = [0]
# 	while stack:
# 		curr = stack.pop()

# 		for adj in graph[curr]:
# 			if adj in unvisited:
# 				stack.append(adj)
# 				unvisited.remove(adj)

# 	return unvisited


# # These will be empty if there are no unvisited nodes
# unvisited_fwd = dfs(forward_graph)
# unvisited_rev = dfs(reverse_graph)

# if unvisited_fwd:
# 	print("NO")
# 	print(f"1 {unvisited_fwd.pop() + 1}")
# elif unvisited_rev:
# 	print("NO")
# 	print(f"{unvisited_rev.pop() + 1} 1")
# else:
# 	print("YES")

# previous solution

n,m = map(int, input().split())
adj = {}
rev_adj = {}
for i in range(n):
    adj[i] = []
    rev_adj[i] = []
for i in range(m):
    x, y = map(int, input().split())
    x-=1
    y-=1
    adj[i].append(x)
    rev_adj[i].append(x)
from collections import deque

def bfs(node):
    q = deque()
    visited = set()
    q.append(node)
    while q:
        q.popleft()
        for neigh in adj[node]:
            visited.add(neigh)
    return visited

visited = bfs(0)

if len(visited) == n:
    
    

else:
    print("NO")
    node = 0
    for i in range(n):
        if i not in visited:
            node = i
    print(1, node+1)