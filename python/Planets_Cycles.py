# this is not the most optimized solution
import sys
sys.setrecursionlimit(10**9)
n = int(input())
arr = list(map(int, input().split()))
adj = {i: [] for i in range(n)}
for i in range(len(arr)):
    adj[i].append(arr[i]-1)
    
def dfs(node):
    global cycle
    global count
    if node in cycle:
        return
    count+=1
    visited.add(node)
    cycle.add(node)
    for i in adj[node]:
        if i not in visited:
            dfs(i)

    
# print(adj)

for i in range(n):
    cycle = set()
    visited = set()
    count = 0
    dfs(i)
    print(count, end = " ")