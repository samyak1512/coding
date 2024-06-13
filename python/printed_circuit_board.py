n = int(input())
sam = []
maxi = 0
for i in range(n):
    l, r = map(int, input().split())
    maxi = max(maxi, l)
    maxi = max(maxi, r)
    sam.append((l, r))
a = [-1 for i in range(maxi+1)]
for i in range(n):
    l, r = sam[i][0], sam[i][1]
    # l-=1
    # r-=1
    a[r] = l
# print(a)    
temp = []
for i in range(len(a)):
    if a[i]==-1:
        continue
    else:
        temp.append(a[i])
# print(temp)
temp = temp[::-1]
def lis(nums, cmp=lambda x, y: x <= y):
    P = [0] * len(nums)
    M = [0] * (len(nums) + 1)
    L = 0

    for i in range(len(nums)):
        lo, hi = 1, L

        while lo <= hi:
            mid = (lo + hi) // 2
            if cmp(nums[M[mid]], nums[i]):
                lo = mid + 1
            else:
                hi = mid - 1

        newL = lo
        P[i] = M[newL - 1]
        M[newL] = i

        L = max(L, newL)

    S = [0] * L
    k = M[L]

    for i in range(L - 1, -1, -1):
        S[i], k = nums[k], P[k]

    return S
# print(lis(temp))
print(len(lis(temp)))


