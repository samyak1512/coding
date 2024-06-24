n = int(input())
arr = list(map(int, input().split()))
ans = []
stack = []
stack.append((0, arr[0]))
for i in range(1, n):
    if stack:
        if arr[i] >= stack[-1][1]:
            count = 0
            while arr[i]>=stack[-1][1]:
                stack.pop()
                count+=1
                if len(stack) == 0:
                    break
            ans.append(count)
    else:
        stack.append((i, arr[i]))
        ans.append(i-1)
    print(stack)
print(ans)