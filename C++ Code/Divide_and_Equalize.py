def is_prime(l):
    if l < 2:
        return False
    if l == 2:
        return True
    if l % 2 == 0:
        return False

    for i in range(3, int(l**0.5) + 1, 2):
        if l % i == 0:
            return False

    return True

t = int(input())
import math
for _ in range(t):
    n = int(input())
    arr = input().split()
    arr = [int(num) for num in arr]
    # print(arr)
    # product = 1
    # product = math.prod(arr)
    # print(product)
    mydict = {}
    for i in range(n):
        x = arr[i]
        j = 2
        while j*j <= arr[i] and x > 1:
            while x % j == 0:
                if j not in mydict:
                    mydict[j] = 0
                mydict[j] += 1
                x = x // j

            if not is_prime(x) and x > 1:
                if x not in mydict:
                    mydict[x] = 0
                mydict[x] += 1
                x = 1
                break
            j += 1
        if not is_prime(x) and x > 1:
            if x not in mydict:
                mydict[x] = 0
            mydict[x] += 1
    print(mydict)
    for i in mydict:
        if i != 1 and mydict[i] != 0:
            print("no")
            continue
    print("yes")
