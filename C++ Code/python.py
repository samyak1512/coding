import sys, os, io
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
 
number_of_testcases = int(input())

for current_testcase_index in range(number_of_testcases):
    arr = list(int (i) for i in input().split())
    n = arr[0]
    m = arr[1]
    ratio = n/m
    if(ratio%0.25!=0):
        print(-1)
    
    else:
        count = 0 
        if(n%m==0):
            count = 0
            print(0)
                
        else:
            print("hi")