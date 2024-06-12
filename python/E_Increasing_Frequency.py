def read_input():
    try:
        n, c = map(int, input().split())
        a = list(map(int, input().split()))
        return n, c, a
    except:
        return None

def max_segment_sum(segments):
    max_sum = -float('inf')
    current_sum = 0
    for value in segments:
        current_sum = max(0, current_sum + value)
        max_sum = max(max_sum, current_sum)
    return max_sum

def solve(n, c, a):
    cntC = [0] * (n + 1)
    for i in range(n):
        cntC[i + 1] = cntC[i] + (a[i] == c)

    max_value = max(a) + 1
    segments = [[] for _ in range(max_value)]
    last_seen = [-1] * max_value

    for i in range(n):
        segments[a[i]].append(-(cntC[i] - cntC[last_seen[a[i]] + 1]))
        last_seen[a[i]] = i
        segments[a[i]].append(1)

    for v in range(max_value):
        segments[v].append(-(cntC[n] - cntC[last_seen[v] + 1]))

    max_increase = 0
    for v in range(max_value):
        if v == c:
            continue
        max_increase = max(max_increase, max_segment_sum(segments[v]))

    total_count_c = cntC[n]
    result = total_count_c + max_increase
    print(result)

if __name__ == '__main__':
    input_data = read_input()
    if input_data:
        n, c, a = input_data
        solve(n, c, a)
