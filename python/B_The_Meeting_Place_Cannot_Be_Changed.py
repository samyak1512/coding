n = int(input())
coords = list(map(int, input().split()))
speed = list(map(int, input().split()))

def possible(time):
    for c in range(min(coords), max(coords)+1):
        total_time = 0
        for i in range(n):
            total_time += abs(c - coords[i])/speed[i]
        if total_time <= time:
            return True
        return False

left, right = 0, 10**9
diff = 10**-6

while left + diff < right:
	mid = (left + right) / 2
	last_comparison = possible(mid)
	if last_comparison:
		right = mid
	else:
		left = mid + diff
        
print(((left + mid) / 2) if last_comparison else ((mid + right) / 2))
