for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    ans = 0
    # state = skip points used till that index
    # transition = 