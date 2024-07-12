n = int(input())
stack = []
arr = list(map(int, input().split()))
ans = []

for index, num in enumerate(arr):
    while stack and stack[-1][0]>=num:
        stack.pop()
    ans.append(0 if len(stack)==0 else stack[-1][1]+1)
    stack.append((num,index ))
print(*ans)


    

    