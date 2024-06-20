import sys

sys.stdin = open("closing.in", "r")
sys.stdout = open("closing.out", "w")
class DisjointSetUnion:
    def __init__(self, n):
        self.parent = list(range(n))
        self.size = [1] * n
        self.num_sets = n

    def find(self, a):
        acopy = a
        while a != self.parent[a]:
            a = self.parent[a]
        while acopy != a:
            self.parent[acopy], acopy = a, self.parent[acopy]
        return a

    def union(self, a, b):
        a, b = self.find(a), self.find(b)
        if a == b:
            return False
        if self.size[a] < self.size[b]:
            a, b = b, a
        self.parent[b] = a
        self.size[a] += self.size[b]
        self.num_sets -= 1
        return True
        
    def set_size(self, a):
        return self.size[self.find(a)]

    def __len__(self):
        return self.num_sets


n, m = map(int, input().split())
dsu = DisjointSetUnion(n)
graph = {i: [] for i in range(n)}

for i in range(m):
    x, y = map(int, input().split())
    x -= 1
    y -= 1
    graph[x].append(y)
    graph[y].append(x)

remove_order = []
for i in range(n):
    remove_order.append(int(input()) - 1)

open_barns = set()
components = 0
fully_connected = []

for node in remove_order[::-1]:
    open_barns.add(node)
    components += 1
    for adj in graph[node]:
        if adj in open_barns:
            if dsu.union(adj, node):
                components -= 1
    fully_connected.append("YES" if components == 1 else "NO")

for i in range(len(fully_connected)):
    print(fully_connected[len(fully_connected)-i-1])
# print(*fully_connected[::-1])
