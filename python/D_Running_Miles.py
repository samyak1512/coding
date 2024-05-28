# the idea is since we can ignore all elements left to an element
# this means b(l) + l
# similarly for right, b(r) - r
# now create a pref arr 
for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    
    pref = [0]*n
    for i in range(n):
        pref[i] = arr[i]+i
    suff = [0]*n
    for i in range(n):
        suff[i] = arr[i] - i
    # print(pref)
    # now this loop tells me the max value of pref[i] till that index
    for i in range(1, n):
        pref[i] = max(pref[i], pref[i - 1])
    # print(pref)
    for i in range(n-2, -1, -1):
        suff[i] = max(suff[i], suff[i+1])
    ans = 0
    for i in range(1, n-1):
        ans = max(ans, pref[i-1] + suff[i+1] + arr[i])
    print(ans)
        
  
        
        
    
    # state = max value acheived till now
    # transition = 