import sys

sys.stdin = open("moocast.in", "r")
sys.stdout = open("moocast.out", "w")

n = int(input())
grid = []
for i in range(n):
    temp = list(map(int, input().split()))
    grid.append(temp)

# print(grid)
adj = {}
for i in range(n):
    adj[i] = []

def distChecker(x1, y1, x2, y2, r):
    if (x1-x2)**2+(y2-y1)**2<=r**2:
        return True
    else:
        return False

for i in range(n):
    for j in range(n):
        if i == j:
            continue
        if distChecker(grid[i][0], grid[i][1], grid[j][0], grid[j][1], grid[i][2]):
            adj[i].append(j)


# print(adj)

from collections import deque
q = deque()
max_elements = 0
def bfs(node):
    count = 0
    visited = set()
    q.append(node)
    while q:
        count+=1
        curr_node = q.pop()
        visited.add(curr_node)
        for i in adj[curr_node]:
            if i not in visited:
                q.append(i)
        
    return count
    
for i in range(n):
    max_elements = max(max_elements, bfs(i))
    
print(max_elements)