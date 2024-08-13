for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    sam = arr
    sam.insert(0, arr[-1])
    sam.pop()
    print(*sam)