n, k = map(int, input().split())
arr = list(map(int, input().split()))

def f(x):
    count = 0
    curr_sum = 0
    for i in range(len(arr)):
        if curr_sum + arr[i] <= x:
            curr_sum += arr[i]
        else:
            count += 1
            curr_sum = arr[i]
    count += 1
    return count

def search():
    low = max(arr)
    high = 10**20
    while low<=high:
        mid = low + (high - low)//2
        
        if f(mid) <= k:
            ans = mid
            high = mid - 1
        if f(mid)>k:
            # ans = mid
            low = mid + 1
            # break
            
    return ans
print(search())
# print(f())
            
        