import math
n=2
m=4
div = m/n
ans = math.ceil((math.log(div,2)))
print(ans)
n = n*(2**ans)
print(n)