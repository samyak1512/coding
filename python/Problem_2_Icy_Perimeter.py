from collections import deque
import sys

# sys.stdin = open("perimeter.in", "r")
# sys.stdout = open("perimeter.out", "w")
t = input()
n = int(t)
ice = []
visited = [[False] * n for _ in range(n)]

for _ in range(n):
    ice.append(list(t))


def out(a, b, l):
	if a < 0 or b < 0 or a >= l or b >= l:
		return True
	return False
directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]
visited = [[False] * n for _ in range(n)]

def bfs(x, y):
	area, peri = 1, 0

	q = deque()
	q.append((x, y))
	visited[x][y] = True

	while q:
		x, y = q.pop()

		for dx, dy in directions:
			nx, ny = x + dx, y + dy
			if out(nx, ny, n) or ice[nx][ny] == ".":
				peri += 1
			else:
				# check if already visited
				if not visited[nx][ny]:
					area += 1
					q.appendleft((nx, ny))
					visited[nx][ny] = True
	return area, peri

max_area, min_peri = 0, 10**18
# visited = set()
for i in range(n):
    for j in range(n):
        if (i, j) not in visited:
            # visited.add((i, j))
            if ice[i][j] == "#" and not visited[i][j]:
                area, peri = bfs(i, j)
                if area>max_area:
                    max_area = area
                    min_peri = peri
                elif area == max_area:
                    min_peri = min(min_peri, peri)

print(max_area, min_peri)
