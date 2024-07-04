import heapq

x, n = map(int, input().split())
d = list(map(int, input().split()))

heapq.heapify(d)
res = 0
for _ in range(n - 1):
	a = heapq.heappop(d)
	b = heapq.heappop(d)
	res += a + b
	heapq.heappush(d, a + b)

print(res)
    
