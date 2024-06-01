for _ in range(int(input())):
    n = int(input())
    s = input()
    letter = 0
    if s[0]>="a" and s[0]<="z":
        letter = 1
    for i in range(1, n):
        if ord(s[i])<ord(s[i-1]):
                # print(i)
                print("NO")
                break
        if ord(s[i])>=97 and ord(s[i])<=122:
            letter = 1
        if letter:
            if ord(s[i])<97 or ord(s[i])>122:
                print("NO")
                # print(i, "no )
                break

            
    else:
        print("YES")
            
            
            