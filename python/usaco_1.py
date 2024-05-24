import sys
sys.stdin = open("div7.in", "r")
sys.stdout = open("div7.out", "w")
def find_key_from_value(d, val):
    arr =  [key for key, value in d.items() if value == val]
    return arr[0]

n = int(input())
arr = []
for i in range(n):
    arr.append(int(input()))
# print(arr)
pref_arr = [0]
for i in range(n):
    pref_arr.append((arr[i]+pref_arr[-1])%7)
# print(pref_arr)

length = 0
mydict = {}
for i in range(len(pref_arr)):
    if pref_arr[i] not in mydict:
        mydict[pref_arr[i]] = [i]
    else:
        mydict[pref_arr[i]].append(i)
# print(mydict)
for i in range(1, len(pref_arr)):
    if pref_arr[i] == 0:
        length = max(length,i)
    else:
        length = max(length, i - mydict[pref_arr[i]][0])
print(length)
        
        
        
# print(length)

# mydict = {}
# for i in range(1, n):
#     if pref_arr[i] == 0:
#         length = max(length, i)
#     if pref_arr[i] in mydict.values():
#         length = max(length, i - find_key_from_value(mydict, pref_arr[i]))
#     if pref_arr[i] not in mydict:
#         temp = []
#         temp.append(pref_arr[i])
#         mydict[i] = temp
# print(length)
        
