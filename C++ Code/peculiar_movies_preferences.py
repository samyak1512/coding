#!/usr/bin/env python
from __future__ import division, print_function

import os
import sys
from io import BytesIO, IOBase

if sys.version_info[0] < 3:
    from __builtin__ import xrange as range
    from future_builtins import ascii, filter, hex, map, oct, zip
def is_palindrome(s):
    # Define a prime number for hashing
    prime = 31

    # Calculate the hash of the string
    hash_forward, hash_backward = 0, 0
    power = 1

    for i in range(len(s)):
        hash_forward = (hash_forward + (ord(s[i]) - ord('a') + 1) * power) % (10**9 + 9)
        hash_backward = (hash_backward * prime + (ord(s[i]) - ord('a') + 1)) % (10**9 + 9)
        power = (power * prime) % (10**9 + 9)

    # Check if the forward and backward hashes are equal
    return hash_forward == hash_backward

def generate_subsets(nums):
    n = len(nums)
    all_subsets_as_strings = []

    for i in range(1, 2**n):  # Start from 1 to exclude the empty subset
        subset = ''.join([str(nums[j]) for j in range(n) if (i & (1 << j)) > 0])
        all_subsets_as_strings.append(subset)

    return all_subsets_as_strings

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = []
        for _ in range(n):
            s = input()
            arr.append(s)
        # print(arr)
        combinations = generate_subsets(arr)
        # print(combinations)
        flag = 0
        
        for i in combinations:
            result = is_palindrome(i)
            # print(result)
            if result:
                flag = 1
                break
        if flag:
            print("yes")
        else:
            print("no")
    


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
