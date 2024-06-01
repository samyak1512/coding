from collections import deque
import sys

sys.stdin = open("perimeter.in", "r")
sys.stdout = open("perimeter.out", "w")
n = int(input())
grid = []
for _ in range(n):
    row = list(input().strip())
    for i in range(len(row)):
        if row[i] == '.':
            row[i] = 0
        else:
            row[i] = 1
    grid.append(row)

directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]

def bfs(x, y):
    area, peri = 0, 0
    q = deque([(x, y)])
    visited = set([(x, y)])
    while q:
        curr_x, curr_y = q.popleft()
        for dx, dy in directions:
            new_x, new_y = curr_x + dx, curr_y + dy
            if (new_x, new_y) not in visited:
                visited.add((new_x, new_y))
                if 0 <= new_x < n and 0 <= new_y < n:
                    if grid[new_x][new_y] == 1:
                        area += 1
                        q.append((new_x, new_y))
                    else:
                        peri += 1
                else:
                    peri += 1  
            elif grid[curr_x][curr_y] != grid[new_x][new_y]:
                peri += 1  
    return area+1, peri

max_area, max_peri = 0, 0
visited = set()
for i in range(n):
    for j in range(n):
        if (i, j) not in visited:
            visited.add((i, j))
            if grid[i][j] == 1:
                area, peri = bfs(i, j)
                max_area = max(max_area, area)
                max_peri = max(max_peri, peri)

print(max_area, max_peri)
