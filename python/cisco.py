def recover_dead_pods(n, connections, queries):
    from collections import defaultdict

    adj = defaultdict(list)
    for u, v in connections:
        adj[u].append(v)
        adj[v].append(u)

    clusters = []
    regions = {}
    visited = set()

    def recur(node):
        if node not in visited:
            visited.add(node)
            for neighbor in adj[node]:
                recur(neighbor)

    # Build clusters and regions
    for node in adj:
        if node not in regions:
            visited = set()
            recur(node)
            clusters.append(visited)
            for v in visited:
                regions[v] = len(clusters) - 1

    dead = set()
    ans = []

    for query in queries:
        node = query[1]
        if query[0] == 2:
            dead.add(node)
            clusters[regions[node]].remove(node)
        else:
            if node not in dead:
                ans.append(node)
            else:
                if clusters[regions[node]]:
                    ans.append(next(iter(clusters[regions[node]])))
                else:
                    ans.append(-1)
    
    return ans

# Example usage
if __name__ == "__main__":
    n = 2
    connections = [[1, 2], [2, 3]]
    queries = [[2, 2], [1, 2], [2, 1], [2, 3], [1, 1]]
    print(recover_dead_pods(n, connections, queries))