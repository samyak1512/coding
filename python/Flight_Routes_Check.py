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
import sys
sys.setrecursionlimit(10**5)
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
    adj[x].append(y)
    rev_adj[y].append(x)

def kosaraju(adj, rev_adj):
    def dfs(node, graph, visited, stack):
        visited.add(node)
        for neigh in graph[node]:
            if neigh not in visited:
                dfs(neigh, graph, visited, stack)
        stack.append(node)

    def reverse_dfs(node, graph, visited, component):
        visited.add(node)
        component.append(node)
        for neigh in graph[node]:
            if neigh not in visited:
                reverse_dfs(neigh, graph, visited, component)

    n = len(adj)
    visited = set()
    stack = []
    
    for i in range(n):
        if i not in visited:
            dfs(i, adj, visited, stack)
    
    visited.clear()
    scc = []
    while stack:
        node = stack.pop()
        if node not in visited:
            component = []
            reverse_dfs(node, rev_adj, visited, component)
            scc.append(component)
    
    return scc

result = kosaraju(adj, rev_adj)
# print(result)
if len(result[0]) == n:
    print("YES")
else:
    print("NO")
    print(result[1][0]+1, result[0][0])