import math
t = int(input())

for c in range(t):
    # print('TESTCASE', c+1)
    sam = input().split()
    n = int(sam[0])
    m = int(sam[1])
    mynum = bin(m//math.gcd(m,n))[3:]
    if '1' in mynum:
        print(-1)
        continue
    myset = set()
    count = 0
    while True:
        if n%m == 0:
            print(count)
            break
        if n > m:
            l = len(myset)
            myset.add(n%m)
            if l == len(myset):
                print(-1)
                break
            n = n%m
        else:
            temp = n
            power2greaterorequalthan = m // n
            if power2greaterorequalthan == m / n:
                power2greaterorequalthan -= 1
            power2req = len(bin(power2greaterorequalthan)) - 2
            n = n * 2 ** power2req
            count += temp * (2 **power2req - 1)