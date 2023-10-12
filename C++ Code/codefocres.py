# t = int(input())
# for sam in range(t):
#     n = int(input())
#     arr = input().split()
#     arr = [int(num) for num in arr]
#     answer = 1
#     for i in arr:
#         if answer == i:
#             answer += 2
#         else:
#             answer += 1
#     print(answer-1)

# t = int(input())
# for sam in range(t):
#     n = int(input())
#     a = []
#     v = [0]*(2*10**5+3)
#     arr = input().split()
#     arr = [int(num) for num in arr]
#     # print(arr)
    
    
import sys, os, io
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
 
t = int(input())
ans = []
inf = pow(10, 9) + 1
for _ in range(t):
    n = int(input())
    a = [0] + list(map(int, input().split())) + [0]
    print(a)
    dp = [inf] * (n + 2)
    dp[0] = 0
    mi = [inf] * (n + 1)
    for i in range(1, n + 2):
        dp[i] = min(mi[a[i]], dp[i - 1] + 1)
        mi[a[i]] = min(mi[a[i]], dp[i - 1])
    ans0 = n - dp[-1] + 1
    ans.append(ans0)
sys.stdout.write("\n".join(map(str, ans)))

