t = int(input())

for c in range(t):
    print(f'Case #{c+1}: ', end='')
    

    # n = int(input())
    # s = input()
    # q = int(input())
    # arr = []
    
    # for i in range(q):
    #     sigma = int(input())
    #     arr.append(sigma)
    
    # myset = set(arr)
    # mylist = list(myset)
    
    # print(mylist)
    # mydict = {i: 0 for i in range(1, n+1)}
    
    # for i in mylist:
    #     for j in range(1, n+1):
    #         if j % i == 0:
    #             mydict[j] += 1
    
    # for key in mydict:
    #     mydict[key] = mydict[key] % 2
    
    # # Convert string to list for modification
    # s_list = list(s)
 
    # for i in range(0, len(s_list)):
    #     if mydict[i + 1] == 1:
    #         if s_list[i] == '0':
    #             s_list[i] = '1'
    #         else:
    #             s_list[i] = '0'
    
    # # Convert list back to string
    # modified_s = ''.join(s_list)
    # print(modified_s)
    # print("here")
    n = int(input())
    mystringvalue = input().strip()

    q = int(input())

    mydict = {}
    for _ in range(q):
        x = int(input())
        mydict[x] = mydict.get(x, 0) + 1

    nums = [key for key, value in mydict.items() if value % 2 != 0]

    for num in nums:
        for k in range(num - 1, n, num):
            if mystringvalue[k] == '1':
                mystringvalue = mystringvalue[:k] + '0' + mystringvalue[k+1:]
            else:
                mystringvalue = mystringvalue[:k] + '1' + mystringvalue[k+1:]

    counter = 0
    for i in range(n):
        if mystringvalue[i] == '1':
            counter += 1
            for k in range(i, n, i + 1):
                if mystringvalue[k] == '1':
                    mystringvalue = mystringvalue[:k] + '0' + mystringvalue[k+1:]
                else:
                    mystringvalue = mystringvalue[:k] + '1' + mystringvalue[k+1:]

    print(counter)

