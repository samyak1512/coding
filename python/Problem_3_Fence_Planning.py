import sys
from typing import List
from sys import setrecursionlimit

setrecursionlimit(10**5)
sys.stdin = open("fenceplan.in", "r")
sys.stdout = open("fenceplan.out", "w")
n, m = map(int, input().split())
arr = []
for i in range(n):
    arr.append(list(map(int, input().split())))
adj = {}
for i in range(m):
    a, b = map(int, input().split())
    if a-1 in adj:
        adj[a-1].append(b-1)
    else:
        adj[a-1] = [b-1]
    if b-1 in adj:
        adj[b-1].append(a-1)
    else:
        adj[b-1] = [a-1]
# print(adj)

visited = set()

def dfs(node):
    global max_x, min_x, max_y, min_y
    visited.add(node)
    max_x = max(max_x, arr[node][0])
    min_x = min(min_x, arr[node][0])
    max_y = max(max_y, arr[node][1])
    min_y = min(min_y, arr[node][1])
    for i in adj[node]:
        if i not in visited:
            dfs(i)
perimeter = 10**18
for i in range(n):
    if i not in visited:
        max_x = -1
        min_x = 10**18
        max_y = -1
        min_y = 10**18
        dfs(i)
        perimeter = min(perimeter,(2*(max_x-min_x)+2*(max_y-min_y)))
print(perimeter)
# print(min(perimeter))
