from collections import defaultdict
import os
import sys
import time
from io import BytesIO, IOBase
from functools import lru_cache
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
 
 
sys.stdin, sys.stdout = IOWrapper(sys.stdin), IOWrapper(sys.stdout)
def input(): return sys.stdin.readline().rstrip("\r\n")
 
# endregionS
 
 
MAXN = int(1e5 + 10)
 
 
def main():
    t = int(input())
 
    is_prime = [True] * (MAXN)
    primes = []
 
    for i in range(2, MAXN):
        if is_prime[i]:
            primes.append(i)
            for j in range(i * 2, MAXN, i):
                is_prime[j] = False
 
    while t:
        n = int(input())
        a = list(map(int, input().split()))
 
        p_cnt = defaultdict(int)
 
        ok = False
        for v in a:
            curr = v
            for d in primes:
                if d * d > curr:
                    break
                if curr % d == 0:
                    p_cnt[d] += 1
                    if p_cnt[d] > 1:
                        ok = True
                        break
                while curr % d == 0:
                    curr //= d
            if curr > 1:
                p_cnt[curr] += 1
                if p_cnt[curr] > 1:
                    ok = True
            if ok:
                break
        print("YES" if ok else "NO")
        t -= 1
 
 
if __name__ == "__main__":
    start_time = time.time()
    main()
    print(f'Execution time: {time.time() - start_time} s', file=sys.stderr)