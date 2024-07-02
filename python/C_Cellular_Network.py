import bisect

n, m = map(int, input().split())
cities = list(map(int, input().split()))
towers = list(map(int, input().split()))

maxi = 0

for city in cities:
    pos = bisect.bisect_right(towers, city)
    
    coord1 = float('inf')
    if pos < m:  # Ensure pos is within the bounds of the towers list
        coord1 = abs(towers[pos] - city)
    
    coord2 = float('inf')
    if pos > 0:  # Ensure pos - 1 is within the bounds of the towers list
        coord2 = abs(towers[pos - 1] - city)
    
    ans = min(coord1, coord2)
    maxi = max(maxi, ans)

print(maxi)
