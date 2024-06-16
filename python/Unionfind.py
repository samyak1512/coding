n, q = map(int, input().split())
link = [i for i in range(n+1)]
size = [1 for i in range(n+1)]

def find(x):
    while x!=link[x]:
        x = link[x]
    return x

def same(a, b):
    return find(a) == find(b)

def unite(a, b):
    a = find(a)
    b = find(b)
    if size[a] < size[b]:
        a,b = b,a
    link[b] = a
# print(link)
for i in range(q):
    t, a, b = map(int, input().split())
    if t == 0:
        unite(a, b)
    if t == 1:
        print(int(same(a, b)))
    
!set