n = int(input())
grid = []
for i in range(n):
    temp = list(input())
    for i in range(len(temp)):
        if temp[i] == '.':
            temp[i] = 0
        else:
            temp[i] = 1
    
    grid.append(temp)
print(grid)
