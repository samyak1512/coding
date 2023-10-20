from collections import defaultdict
arr1 = [3, 8, 2, 1]

myset = {}
myset['samyak'] = 0
print(str(arr1))
myset[str(arr1)] = 0
count = 0
def samyak(arr,moves, index):
    global myset
    global count
    print(arr)
    n = len(arr)
    index = index%n
    if arr == sorted(arr):
        print(moves,arr)
    else:
        #1
        temp = arr[(index + arr[index])%n]
        newarr1 = arr[:]
        newarr1[(index + arr[index])%n]= newarr1[index]
        newarr1[index] = temp
        if str(newarr1) not in myset or myset[str(newarr1)] > moves+1:
            count = 0
            myset[str(newarr1)] = moves+1
            print('choose front and swapping', newarr1[index], newarr1[(index + arr[index])%n], ' index ', index)
            samyak(newarr1, moves+1, index)
        
        #2
        temp = arr[(index + (n-arr[index]%n))%n]
        newarr2 = arr[:]
        newarr2[(index + (n-arr[index]%n))%n]= newarr2[index]
        newarr2[index] = temp
        if str(newarr2) not in myset or myset[str(newarr2)]>moves+1:
            count = 0
            myset[str(newarr2)] = moves+1
            print('choose backward and swapping', newarr2[index], newarr2[(index + (n-arr[index]%n))%n], ' index ', index)
            samyak(newarr2, moves+1, index)
        
        #3
        if count < n:
            print('Doing nothing and index', index+1, 'count: ', count)   
            count+=1
            samyak(arr, moves, index+1)
        
        
        
    
    
    
samyak(arr1, 0, 0)