for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    max_value = 0

    for i in range(n):
        if b[i] == 1:
            add = min(k, n - 1)
            a[i] += add
            k -= add
    for i in range(n):
        c = []
        for j in range(n):
            if i != j:
                c.append(a[j])
        c.sort()
        median = c[(n - 2) // 2]
        max_value = max(max_value, a[i] + median)
    print(max_value)

