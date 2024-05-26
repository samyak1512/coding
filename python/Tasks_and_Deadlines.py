n = int(input())
arr = []
for i in range(n):
    x, y = map(int, input().split())
    arr.append((x, y))
arr.sort()
reward = 0
time = 0

for i in range(n):
    time += arr[i][0]
    reward += arr[i][1] - time
print(reward)
    