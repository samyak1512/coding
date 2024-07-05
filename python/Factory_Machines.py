n, m = map(int, input().split())
machines = list(map(int, input().split()))

def possible(time):
    total_products = 0
    for machine in machines:
        total_products+=time//machine
    if total_products>=m:
        return True
    return False

def binary_search(hi, lo):
    ans = 0
    while hi>=lo:
        mid = (hi+lo)//2
        if possible(mid):
            ans = mid
            hi = mid-1
        if not possible(mid):
            # ans = mid
            lo = mid+1
    return ans

print(binary_search(10**18, 0))