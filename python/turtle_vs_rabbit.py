# import sys

# sys.stdin = open("factory.in", "r")
# sys.stdout = open("factory.out", "w")

n = int(input())
neigh = [[] for i in range(n)]
for i in range(n-1):
    x, y = map(int, input().split())
    x-=1
    y-=1
    neigh[y].append(x)
print(neigh)
root = -1    

visited = set()
def dfs(node):
        visited.add(node)
        if neigh[node] == []:
            return 
        for sam in neigh[node]:
            dfs(sam)
for i in range(n):
    visited = set()
    visited.add(i)
    
    dfs(i)
    print(visited)
    
    if len(visited) == n:
        root = i+1
        break
print(root)
            
    
    
    
    
    