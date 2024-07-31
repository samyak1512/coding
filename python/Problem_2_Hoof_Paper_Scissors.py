n, k = map(int, input().split())
gestures = []
for i in range(n):
    x = input()
    if x == "H":
        x = 0
    if x == "P":
        x = 1
    else:
        x = 2
    gestures.append(x)
# dp[i][j] -> the no of games cow can we win for atmost j changes
# print(gestures)
dp = []
for i in range(n+1):
    dp.append([0]*(k+1))
# print(dp)

freq = {}
for i in range(1, n+1):
    if gestures[i-1] in freq:
        freq[gestures[i-1]] += 1
    else:
        freq[gestures[i-1]] = 1
    # print(freq)
    dp[i][0] = max(freq.values())
# [[0, 0], 
#  [1, 2], 
#  [2, 3], 
#  [2, 5], 
#  [3, 5], 
#  [3, 6]]
print(dp)
print()
for j in range(1, k+1):
    for i in range(1, n+1):
        ans = 0
        for c in range(i-1, -1, -1):
            ans = max(ans, dp[c][j-1] + max(map(lambda x: gestures[:i].count(x), set(gestures[:i]))))
        dp[i][j] = ans
print(dp)
        