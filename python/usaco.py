n = int(input())
mydict = {}
arr = ["Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"]
arr.sort()

j = 0
for i in arr:
    mydict[i] = j
    j+=1
neigh = [[] for i in range(len(arr))]
print(mydict)
# print(arr)
for i in range(n):
    s = input().split()
    cow1 = mydict[s[0]]
    cow2 = mydict[s[-1]]
    print(cow1, cow2)
    neigh[cow1].append(cow2)
    neigh[cow2].append(cow1)
    
    
print(neigh, "neigh")

order = []
visited = set()
for cow in range(8):
    if cow not in visited and len(neigh[cow])<=1:
        visited.add(cow)
        order.append(cow)
        
        if neigh[cow] == 1:
            new_neigh = neigh[cow][0]
            visited.add(new_neigh)
            order.append(new_neigh)
            
            while len(neigh[new_neigh]) == 2:
                neigh1 = neigh[new_neigh][0]
                neigh2 = neigh[new_neigh][1]
                if neigh1 in visited:
                    visited.add(neigh2)
                    order.append(neigh2)
                else:
                    visited.add(neigh1)
                    order.append(neigh1)
                    
            end_neigh = order[-1]
            visited.add(end_neigh)
            order.append(end_neigh)

d2=dict((value,key) for key,value in mydict.items())
print(order, "order")
for c in order:
    print(d2[c])
                    
                    
                
        
        
    
    
    
    
    
    