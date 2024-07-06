n, m = map(int, input().split())
intervals = []
for i in range(m):
    x, y = map(int, input().split())
    intervals.append([x, y])
intervals.sort()
print(intervals)
def valid(max_d):
    arr = [intervals[0][0]]
    prev_num = intervals[0][0]
    for _ in range(n):
        curr_num = prev_num + max_d
        for i, interval in enumerate(intervals):
            if curr_num>=interval[0] and curr_num<=interval[1]:
                break   
        arr.append(curr_num)
        prev_num = curr_num
    print(arr)
valid(1)