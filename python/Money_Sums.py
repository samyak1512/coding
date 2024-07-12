n = int(input())
arr = list(map(int, input().split()))

# state = dp[i] = no of possible combinations made till that index(i)
# transition = dp[i] = iterative sum of all the possible combinations in dp till now
# base case = dp[0] = 0
            # dp[1] = arr[0]
dp = [0 for i in range(n+1)]
dp[0] = 0
dp[1] = arr[0]
unique_sums = set()
unique_sums.add(0)
unique_sums.add(arr[0])
for i in range(1, n):
    temp_set = set()
    for num in unique_sums:
        temp_set.add(num + arr[i])
    for num in temp_set:
        unique_sums.add(num)
unique_sums.remove(0)
print(len(unique_sums))
sorted_unique_sets = sorted(unique_sums)
print(*sorted_unique_sets)


