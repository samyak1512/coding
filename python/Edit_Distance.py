s1 = input()
s2 = input()
n1 = len(s1)
n2 = len(s2)
dp = []
for i in range(n1+1):
    dp.append([0]*(n2+1))
# print(dp)
dp[0] = [i for i in range(n2+1)]
# print(dp)
for i in range(n1+1):
    dp[i][0] = i
# print(dp)
for i in range(1,n1+1):
    for j in range(1, n2+1):
        a = 1 + dp[i-1][j]
        b = 1 + dp[i][j-1]
        c = 1 + dp[i-1][j-1]
        d = 10**9
        if s1[i-1] == s2[j-1]:
            d = dp[i-1][j-1]
        dp[i][j] = min(a, b, c, d)
print(dp[-1][-1])