from random import randint

RANDOM = randint(1, 10 ** 9)


class Wrapper(int):
    def __new__(cls, x):
        return super().__new__(cls, x)

    def __hash__(self):
        return super(Wrapper, self).__hash__() ^ RANDOM


for _ in range(int(input())):
    n = int(input())
    presum = 0
    arr = list(map(int, input().split()))
    sam = dict()
    flag = False
    for i in range(n):
        if i % 2 != 0:
            presum -= arr[i]
        else:
            presum += arr[i]
        if presum == 0 or Wrapper(presum) in sam:
            flag = True
            break
        wx = Wrapper(presum)
        sam[wx] = True

    if flag:
        print("YES")
    else:
        print("NO")