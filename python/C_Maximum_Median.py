n, k = map(int, input().split())
arr = list(map(int, input().split()))
arr.sort()

def operations_req(median):
    count = 0
    for i in range((n-1)//2, n):
        count += max(0, median - arr[i])
    return count

def binary_search(hi, lo, arr):
    ans = 0
    
    while hi>=lo:
        mid = (hi + lo)//2
        if operations_req(mid) == k:
            ans = mid
            break
        
            
        if operations_req(mid)<k:
            ans = mid
            lo = mid + 1
        if operations_req(mid) > k:
            # ans = mid
            hi  = mid - 1
    return ans
print(binary_search(10**18, 0, arr))