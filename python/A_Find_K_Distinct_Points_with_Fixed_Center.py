t = int(input())
for _ in range(t):
    x, y, k = map(int, input().split())
    arr = []
    if k%2==0:
        for i in range(1, k//2+1):
            arr.append((x-i, y-i))
            arr.append((x+i, y+i))
    else:
        for i in range(1, k//2+1):
            arr.append((x-i, y-i))
            arr.append((x+i, y+i))
        arr.append((x, y))
    for i in range(len(arr)):
        print(arr[i][0],arr[i][1])
    