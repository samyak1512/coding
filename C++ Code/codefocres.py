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
    
    
# import sys, os, io
# input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
 
# t = int(input())
# ans = []
# inf = pow(10, 9) + 1
# for _ in range(t):
#     n = int(input())
#     a = [0] + list(map(int, input().split())) + [0]
#     print(a)
#     dp = [inf] * (n + 2)
#     dp[0] = 0
#     mi = [inf] * (n + 1)
#     for i in range(1, n + 2):
#         dp[i] = min(mi[a[i]], dp[i - 1] + 1)
#         mi[a[i]] = min(mi[a[i]], dp[i - 1])
#     ans0 = n - dp[-1] + 1
#     ans.append(ans0)
#     print(ans)
# # sys.stdout.write("\n".join(map(str, ans)))
def is_substring(string1, string2):
    return string2.find(string1) != -1

t = int(input())
for _ in range(t):
    n, m = map(int, input().split())

    # Reading two strings
    string1 = input()
    string2 = input()
    # print(string1)
    # print(string2)

    # hola = string1 * 30
    # result = is_substring(string1, string2)
    # # print(result)

    # if not result:
    #     print(-1)
    #     continue
    # else:
    #     counter = 0
    #     answer = string1
    #     samyak = is_substring(string2, answer)

    #     while not samyak:
    #         answer += string1
    #         counter += 1
    #         samyak = is_substring(string2, answer)

    #     if len(answer) <= len(string2):
    #         # print(answer)
    #         print(counter)
    #     else:
    #         print(-1)
    pos = False
    for i in range(7):
        if(string1.find(string2)!=-1):
            pos  = True
            print(i)
            break
        string1+=string1
    if not pos:
        print(-1)

        
    
    

