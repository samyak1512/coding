import sys

sys.setrecursionlimit(10**5)  # Python has a default recursion limit of 1000

n = 6

"""
Define adjacency list and read in problem-specific input here.

In this example, we've provided "dummy input" that's
reflected in the GIF above to help illustrate the
order of the recrusive calls.
"""
adj = [[] for _ in range(n)]
adj[0] = [1, 2, 4]
adj[1] = [3, 4]
adj[2] = [5]

visited = set()

def dfs(current_node):
	visited.add(current_node)
	for neighbor in adj[current_node]:
		if neighbor not in visited:
			dfs(neighbor)


for i in range(n):
    visited = set()
    dfs(i)
    