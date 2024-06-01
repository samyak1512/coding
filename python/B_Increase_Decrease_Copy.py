for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    total_ops = 0
    last_num = b[-1]
    diff = 10**18
    to_app = 0
    # for i in range(n):
    #     temp = abs(a[i] - b[-1])
    #     if temp<=diff:
    #         diff = temp
    #         to_app = a[i]
    to_app = last_num
    total_ops+=1
    for i in range(n):
        if a[i]<to_app:
            if b[i]>=to_app:
                a[i] = to_app
                total_ops+=abs(to_app - a[i])
                break
    a.append(to_app)
    print(total_ops)
    print(a)
    print(b)
    for i in range(n+1):
        total_ops += abs(a[i] - b[i])
    print(total_ops)
            
        