from typing import List, Tuple
import heapq


def prim(neighbors: List[Tuple[int, int]]) -> int:
	n = len(neighbors)  # just a shorthand

	min_cost = 0
	dist = [float("inf") for _ in range(n)]
	dist[0] = 0
	q = [(0, 0)]
	visited = [False for _ in range(n)]
	added = 0
	while added < n:
		if not q:
			return -1

		curr_cost, v = heapq.heappop(q)
		if dist[v] < curr_cost:
			continue

		added += 1
		visited[v] = True
		min_cost += curr_cost
		for next_, n_cost in neighbors[v]:
			if not visited[next_] and n_cost < dist[next_]:
				dist[next_] = n_cost
				heapq.heappush(q, (n_cost, next_))
	return min_cost


city_num, road_num = map(int, input().split())
neighbors = [[] for _ in range(city_num)]
for _ in range(road_num):
	a, b, cost = map(int, input().split())
	a -= 1
	b -= 1
	neighbors[a].append((b, cost))
	neighbors[b].append((a, cost))


min_cost = prim(neighbors)
print("IMPOSSIBLE" if min_cost == -1 else min_cost)