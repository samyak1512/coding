# dijkstra algorithm
n, m, q = map(int, input().split())
adj = {i:[] for i in range(n)}
for i in range(m):
    a, b, w = map(int, input().split())
    a-=1
    b-=1
    adj[a].append((b, w))
    adj[b].append((a, w))

def dijkdtra(start, end):
    import heapq
    distance = [10**18 for i in range(n)]
    processed = [0 for i in range(n)]
    distance[start] = 0
    q = []
    heapq.heapify(q)
    heapq.heappush(q, (0, start))
    while q:
        a = q[0][1]
        heapq.heappop(q)
        if processed[a] == True:
            continue
        processed[a] = True
        for neigh in adj[a]:
            b = neigh[0]
            w =neigh[1]
            if distance[a] + w < distance[b]:
                distance[b] = distance[a]+w
            heapq.heappush(q, (distance[b], b))
    return distance
for i in range(q):
    a, b = map(int, input().split())
    a-=1
    b-=1
    distance = dijkdtra(a, b)
    if distance[b]!= 10**18:
        print(distance[b])
    else:
        print(-1)
    
            
            
        
    
