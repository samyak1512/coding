n = int(input())
arr = []
for i in range(n):
    x, y = map(int, input().split())
    arr.append(((x, y), i))
arr.sort()
roomAsign = [-1 for i in range(n)]
roomId = 1

