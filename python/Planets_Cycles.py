n = int(input())
arr = list(map(int, input().split()))

adj = {i + 1: arr[i] for i in range(n)}
dp = [-1] * (n + 1)

for node in range(1, n + 1):
    if dp[node] != -1:
        continue
    visited = {}
    curr = []
    
    while node not in visited:
        curr.append(node)
        visited[node] = len(curr) - 1
        node = adj[node]
    
    if node in visited:
        repeated_element_ind = visited[node]
        length_of_cycle = len(curr) - repeated_element_ind
        
        for i in range(len(curr) - 1, repeated_element_ind - 1, -1):
            dp[curr[i]] = length_of_cycle
        
        for i in range(repeated_element_ind - 1, -1, -1):
            dp[curr[i]] = length_of_cycle + repeated_element_ind - i

print(*dp[1:])
