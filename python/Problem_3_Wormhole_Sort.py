# BeginCodeSnip{DSU}
class DSU:
    def __init__(self, size):
        self.parent = list(range(size))
        self.size = [1] * size

    def get_top(self, n):
        if self.parent[n] != n:
            self.parent[n] = self.get_top(self.parent[n])
        return self.parent[n]

    def link(self, n1, n2):
        n1 = self.get_top(n1)
        n2 = self.get_top(n2)
        if n1 == n2:
            return False
        if self.size[n2] > self.size[n1]:
            return self.link(n2, n1)
        self.parent[n2] = n1
        self.size[n1] += self.size[n2]
        return True
# EndCodeSnip
import sys
sys.stdin = open("wormsort.in", "r")
sys.stdout = open("wormsort.out", "w")
class Wormhole:
    def __init__(self, c1, c2, width):
        self.c1 = c1
        self.c2 = c2
        self.width = width

    def __lt__(self, other):
        return self.width < other.width


    
cow_num, wormhole_num = map(int, input().split())
cows = list(map(lambda x: int(x) - 1, input().split()))
    
max_width = 0
wormholes = []
for _ in range(wormhole_num):
    c1, c2, width = map(int, input().split())
    wormholes.append(Wormhole(c1 - 1, c2 - 1, width))
    max_width = max(max_width, width)

wormholes.sort(reverse=True)
wormhole_at = 0
dsu = DSU(cow_num)

for i in range(cow_num):
    while dsu.get_top(i) != dsu.get_top(cows[i]):
        dsu.link(wormholes[wormhole_at].c1, wormholes[wormhole_at].c2)
        wormhole_at += 1


print(f"{-1 if wormhole_at == 0 else wormholes[wormhole_at - 1].width}")

