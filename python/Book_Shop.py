#!/usr/bin/env python
from __future__ import division, print_function

import os
import sys
from io import BytesIO, IOBase

if sys.version_info[0] < 3:
    from __builtin__ import xrange as range
    from future_builtins import ascii, filter, hex, map, oct, zip


def main():
    # esentially the knapsack problem
    n, budget = map(int, input().split())
    cost = list(map(int, input().split()))
    pages = list(map(int, input().split()))
    
    # state = dp[i][j] = what is the max no of pages we can 
    # get under cost j including the ith book
    
    # transition = 1)either we take the book->dp[i][j]  = max(dp[k][j-cost[k] where k ranges from 0 to i])
                #  2) we skip the book->dp[i][j] = dp[i-1][j]
                
    dp = [[0 for _ in range(budget + 1)] for _ in range(n + 1)]
    #dp table
    # Budget 0 1 2 3 4 5 6 7 8   9  10
    #   0    0 0 0 0 0 0 0 0 0   0  0
    #   1    0 0 0 0 5 5 5 5 5   5  5
    #   2    0 0 0 0 5 5 5 5 12  12 12
    #   3    0 0 0 0 5 8 8 8 12  13 13
    #   4    0 0 0 1 5 8 8 8 12  13 13

    for i in range(1, n+1):
        curr_cost = cost[i-1]
        curr_pages = pages[i-1]
        
        for j in range(1, budget+1):
            # if the current book is not bought, then the number of pages is
            # the same as number of pages bought for first i-1 books using
            # j amount of money
            dp[i][j] = dp[i-1][j]
            if curr_cost<=j:
                # if the current book can be bought, then store the most
                # number of pages using the remaining money after buying
                # the current book plus the pages for the current book.
                dp[i][j] = max(dp[i][j], dp[i-1][j-curr_cost] + curr_pages)
    print(dp[n][budget])


    


# region fastio

BUFSIZE = 8192


class FastIO(IOBase):
    newlines = 0

    def __init__(self, file):
        self._fd = file.fileno()
        self.buffer = BytesIO()
        self.writable = "x" in file.mode or "r" not in file.mode
        self.write = self.buffer.write if self.writable else None

    def read(self):
        while True:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            if not b:
                break
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines = 0
        return self.buffer.read()

    def readline(self):
        while self.newlines == 0:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            self.newlines = b.count(b"\n") + (not b)
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines -= 1
        return self.buffer.readline()

    def flush(self):
        if self.writable:
            os.write(self._fd, self.buffer.getvalue())
            self.buffer.truncate(0), self.buffer.seek(0)


class IOWrapper(IOBase):
    def __init__(self, file):
        self.buffer = FastIO(file)
        self.flush = self.buffer.flush
        self.writable = self.buffer.writable
        self.write = lambda s: self.buffer.write(s.encode("ascii"))
        self.read = lambda: self.buffer.read().decode("ascii")
        self.readline = lambda: self.buffer.readline().decode("ascii")


def print(*args, **kwargs):
    """Prints the values to a stream, or to sys.stdout by default."""
    sep, file = kwargs.pop("sep", " "), kwargs.pop("file", sys.stdout)
    at_start = True
    for x in args:
        if not at_start:
            file.write(sep)
        file.write(str(x))
        at_start = False
    file.write(kwargs.pop("end", "\n"))
    if kwargs.pop("flush", False):
        file.flush()


if sys.version_info[0] < 3:
    sys.stdin, sys.stdout = FastIO(sys.stdin), FastIO(sys.stdout)
else:
    sys.stdin, sys.stdout = IOWrapper(sys.stdin), IOWrapper(sys.stdout)

input = lambda: sys.stdin.readline().rstrip("\r\n")

# endregion

if __name__ == "__main__":
    main()

