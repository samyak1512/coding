def SwitchSort(arr):
    for index in range(len(arr)-1):
        if arr[index] > arr[index+1]:
            return False
    return True
arr = [3,8,2,1]
# Corrected indentation
arr_len, steps = len(arr), 0

index = 0    
while not SwitchSort(arr):
    
    # indexs reached after move left or right
    move_right = (index + arr[index]) % arr_len
    move_left = (index - arr[index]) % arr_len

    # index in the sorted array is one less than the value at that index
    if arr[index] == index + 1:
        index = (index + 1)  % arr_len
        continue
    elif move_right + 1 == arr[index]:
        steps += 1
        arr[index], arr[move_right] = arr[move_right], arr[index]
        index = (index + 1)  % arr_len
    elif move_left + 1 == arr[index]:
        steps += 1
        arr[index], arr[move_left] = arr[move_left], arr[index]
        index = (index + 1)  % arr_len
    # if it is not possible for the current value to get the proper index continue
    else:
        index = (index + 1)  % arr_len

# Corrected indentation
print(steps)
