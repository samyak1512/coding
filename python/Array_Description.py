n, m  = map(int, input().split())
arr = list(map(int, input().split()))

count = []
if m == 1:
    print(1)
else:    
    if arr[0]==0 and (arr[1]==m or arr[1] ==1):
        count.append(2)
    elif arr[0] == 0:
        count.append(3)
        
    if arr[-1] == 0 and (arr[-2]==m or arr[-2]==1):
        count.append(2)
    elif arr[-1] == 0:
        count.append(3)
        
    for i in range(1, n-1):
        if arr[i]==0:
            if arr[i-1]==arr[i+1]==1:
                count.append(2)
            elif arr[i-1]==arr[i+1]==m:
                count.append(2)
            elif arr[i-1]==arr[i+1] and arr[i-1]!=1 and arr[i-1]!=m:
                count.append(3)
            elif arr[i-1]!=arr[i+1]:
                count.append(1)
ans = 1
for i in range(len(count)):
    ans = ans*count[i]
print(ans)