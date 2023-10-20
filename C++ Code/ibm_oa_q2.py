s = input()
print(s)
arr = s.split()
# print(arr)
golu = []
newgolu = []
for i in arr:
    news = ''
    for j in i:
        if j=='a' or j=='i' or j=='e' or j=='o' or j=='u':
            pass
        else:
            news+=j
    if news in newgolu:
        count = 0
        for word in newgolu:
            if word == news:
                count+=1
        golu.append(news+str(count))
        newgolu.append(news)
    else:
        golu.append(news)
        newgolu.append(news)
    
print(' '.join(golu))