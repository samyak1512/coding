import sys
from sys import setrecursionlimit

setrecursionlimit(10**9)
sys.stdin = open("closing.in", "r")
sys.stdout = open("closing.out", "w")
n, m = map(int, input().split())
adj = {i: [] for i in range(n)}
for i in range(m):
    a, b = map(int, input().split())
    adj[a-1].append(b-1)
    adj[b-1].append(a-1)
new_length = n
# print(adj)

def dfs(node):
    visited.add(node)
    for i in adj[node]:
        if i not in visited:
            dfs(i)
    
myarr = []
for i in range(n):
    myarr.append(i)
for i in range(n):
    x = int(input())
    visited = set()
    # print(myarr)
    dfs(myarr[0])
    # print(visited, "visited set")
    if len(visited) == len(myarr):
        print("YES")
    else:
        print("NO")
    new_length-=1
    myarr.remove(x-1)
    for i in range(len(adj)):
        if x-1 in adj[i]:
            adj[i].remove(x-1)
    for i in adj:
        if x-1 in adj[i]:
            adj[i].remove(x-1)
    