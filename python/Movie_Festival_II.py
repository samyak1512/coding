# from bisect import bisect_left, bisect_right

# class FenwickTree:
#     def __init__(self, size):
#         self.size = size
#         self.bit = [0] * (size + 1)

#     def update(self, idx, x):
#         idx += 1
#         while idx <= self.size:
#             self.bit[idx] += x
#             idx += idx & -idx

#     def query(self, idx):
#         idx += 1
#         total = 0
#         while idx > 0:
#             total += self.bit[idx]
#             idx -= idx & -idx
#         return total

#     def find_kth(self, k):
#         idx = 0
#         mask = 1
#         while mask < self.size:
#             mask <<= 1
#         for i in range(mask.bit_length() - 1, -1, -1):
#             nxt = idx + (1 << i)
#             if nxt <= self.size and k >= self.bit[nxt]:
#                 idx = nxt
#                 k -= self.bit[nxt]
#         return idx

# class SortedList:
#     block_size = 700

#     def __init__(self, iterable=()):
#         self.data = sorted(iterable)
#         self.fenwick = FenwickTree(len(self.data))
#         for i in range(len(self.data)):
#             self.fenwick.update(i, 1)

#     def insert(self, x):
#         idx = bisect_left(self.data, x)
#         self.data.insert(idx, x)
#         self.fenwick.update(idx, 1)

#     def pop(self, idx):
#         value = self.data.pop(idx)
#         self.fenwick.update(idx, -1)
#         return value

#     def __getitem__(self, idx):
#         return self.data[idx]

#     def lower_bound(self, x):
#         return bisect_left(self.data, x)

#     def upper_bound(self, x):
#         return bisect_right(self.data, x)

#     def find_kth(self, k):
#         return self.fenwick.find_kth(k)

#     def __len__(self):
#         return len(self.data)

#     def __repr__(self):
#         return str(self.data)

# # Reading input
# n, k = map(int, input().split())
# events = [tuple(map(int, input().split())) for _ in range(n)]

# # Initializing data structures
# ending_times = SortedList([0] * k)
# events.sort(key=lambda x: x[1])
# count = 0

# # Processing events
# for start, end in events:
#     it = ending_times.upper_bound(start)
#     if it > 0:
#         ending_times.pop(it - 1)
#         ending_times.insert(end)
#         count += 1

# print(count)

# previous solution

