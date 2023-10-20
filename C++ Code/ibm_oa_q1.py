t = int(input())
for _ in range(t):
    n = int(input())
    k = int(input())
    arr = list(map(int, input().split()))
    answer = 0
    mini = arr[0]
    maxi = arr[0]
    for i in range(len(arr)):
        mini = min(arr[i], mini)
        maxi = max(arr[i], maxi) 
        if((arr[i]-mini)>k or (maxi-arr[i])>k):
            answer+=1
            maxi = arr[i]
            mini = arr[i]
            print(i,"debug")
    print(answer+1)