import sys, os, io
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
import math

t  = int(input())
arr = list(int (i) for i in input().split())
apples = arr[0]
people = arr[1]

