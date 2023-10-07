t = int(input())

for c in range(t):
    print(f'Case #{c+1}: ', end='')
    sam = input().split()
    n = int(sam[0])
    k = int(sam[1])
    arr = list(int(i) for i in input().split())
    
    if n>2*k:
        print('NO')
    else:
        mydict = {}
        for i in arr:
            if i in mydict:
                mydict[i] += 1
            else:
                mydict[i] = 1
        
            if mydict[i] > 2:
                print('NO')
                break
        else:
            print('YES')