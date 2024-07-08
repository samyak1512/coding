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
def kosaraju(adj, rev_adj):
    def dfs(node, graph, visited, stack):
        visited[node] = True
        for neigh in graph[node]:
            if not visited[neigh]:
                dfs(neigh, graph, visited, stack)
        stack.append(node)

    def reverse_dfs(node, graph, visited, component):
        visited[node] = True
        component.append(node)
        for neigh in graph[node]:
            if not visited[neigh]:
                reverse_dfs(neigh, graph, visited, component)

    n = len(adj)
    visited = [False] * n
    stack = []
    
    for i in range(n):
        if not visited[i]:
            dfs(i, adj, visited, stack)
    
    visited = [False] * n
    scc = []
    while stack:
        node = stack.pop()
        if not visited[node]:
            component = []
            reverse_dfs(node, rev_adj, visited, component)
            scc.append(component)
    
    return scc

# Main code
import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**5)

n, m = map(int, input().split())
adj = [[] for _ in range(n)]
rev_adj = [[] for _ in range(n)]

for _ in range(m):
    x, y = map(int, input().split())
    adj[x-1].append(y-1)
    rev_adj[y-1].append(x-1)

result = kosaraju(adj, rev_adj)

if len(result) == 1:
    print("YES")
else:
    print("NO")
    print(result[1][0] + 1, result[0][0] + 1)