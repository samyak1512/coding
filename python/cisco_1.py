n = 2
connections = [[1, 2], [2, 3]]
queries = [[2, 2], [1, 2], [2, 1], [2, 3], [1, 1]]

from collections import defaultdict
adj = {i:[] for i in range(n+2)}
for i in range(len(connections)):
    adj[connections[i][0]].append(connections[i][1])
    adj[connections[i][1]].append(connections[i][0])
print(adj)