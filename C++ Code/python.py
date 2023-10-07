import sys, os, io
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
import math

t  = int(input())

for i in range(t):
    arr = list(int (i) for i in input().split())
    n = arr[0]
    m = arr[1]
    count = 0
    myset = set()
    samyak = math.gcd(n,m)
    hola = m/samyak
    # print(samyak)
    # print(hola)
    holaa  = math.log(hola, 2)
    # print(holaa)
    tempo = math.floor(holaa)
    tempo = holaa- tempo
    
    if(tempo!=0):
        print(-1)
        continue
    while True:
        
        if(n%m==0):
            # count = 0
            print(count)
            break
        if(n<m):
            # print('nm', n, m)
            temp = n
            div = m/n
            ans = math.ceil((math.log(div,2)))
            n = n*2**ans
            sumi = temp*((2**ans)-1)
            # print('sum', sumi)
            count = count + sumi
            # print('count', count)
        else:
            n = n-m
            if(n in myset):
                print(-1)
                
                break
            myset.add(n)
            
        
        
        
    
    

    
    
