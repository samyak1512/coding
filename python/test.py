n = int(input())
arr = list(map(int, input().split()))

adj = {}
for i in range(n):
    adj[i+1] = arr[i]
# print(adj)

dp = [-1 for i in range(n+1)]

for i in range(1, n+1):
    visited = set()
    curr  = []
    if dp[i]!=-1:
        continue
    else:
        node = i
        while node not in visited:
            visited.add(node)
            curr.append(node)
            node = adj[node]
        # print(curr, i)
        index = curr.index(node)
        cycle_length = len(curr) - index
        for j in range(index, len(curr)):
            dp[curr[j]] = cycle_length
        for k in range(index-1,-1, -1):
            dp[curr[k]] = dp[curr[k+1]] + 1
        
        
print(*dp[1:])
        
    