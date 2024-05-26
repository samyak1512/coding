n, m = map(int, input().split())
cities = list(map(int,input().split()))
towers = list(map(int, input().split()))

def find(r):
    i = 0
    j = 0
    for j in range(len(towers)):
        if 