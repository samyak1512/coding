n = int(input())
arr = []
for i in range(n):
    x, y = map(int, input().split())
    arr.append((x, y))
arr.sort(key = lambda x:x[1])
ending_time = 0
count = 0
for i in arr:
    if ending_time<=i[0]:
        count+=1
        ending_time = i[1]
print(count)