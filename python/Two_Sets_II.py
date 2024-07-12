n = int(input())
#state = dp[i][j] = no of ways to make sum j with numbers from 1 to i
MOD = 10**9 + 7

# rough work
#[1] = no of ways = 0
#[1, 2] = 0
#[1, 2, 3] = 1
#[1, 2, 3, 4] = 2
import sys
# transition = dp[i][j] = dp[i-1][j] + dp[i-1][j-i]
# here dp[i-1][j] means that we are not picking up the element
# dp[i-1][j-i] means that we are picking up that element
sum_elements = n*(n+1)//2
# if the sum of elements is not even, we can not divide in 2 sets equally
if sum_elements % 2 == 1:
	print(0)
	sys.exit()
dp = []
for i in range(n):
    temp = [0 for _ in range(sum_elements//2+1)]
    dp.append(temp)
# print(dp)
dp[0][0] = 1 #we can make a set with sum 0 divide into 2 parts

for i in range(1, len(dp)):
    for j in range(len(dp[0])):
        
        #if we are skipping the elements
        dp[i][j] += dp[i-1][j]
        
        # if we can get a possible sum then add that
        # now we are including the element
        #so now here j-i bcs we are adding i to the sum, so now the sum would be (j-i)+i = j
        if j - i>=0:
            dp[i][j] += dp[i-1][j-i]
        dp[i][j] %= MOD
# print(dp)
print(dp[-1][sum_elements // 2])
            