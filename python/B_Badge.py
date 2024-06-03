n = int(input())
arr = list(map(int, input().split()))
for i in range(n):
    arr[i] -= 1

# print(arr)

for i in range(n):
    visited = set()
    while True:
        
        # if arr[i] == i:
        #     break
        # if arr[i] in visited:
        #     break
        # print(visited)
        if i in visited:
            break
        # visited.add(arr[i])
        visited.add(i)
        i = arr[i]
    print(i+1, end=' ')


    