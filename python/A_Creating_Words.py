for _ in range(int(input())):
    s, t = map(str, input().split())
    s1 = s[0]
    t1 = t[0]
    s = t1 + s[1:]
    t = s1 + t[1:]
    print(s, t)