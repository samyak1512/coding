def main():
    t = int(input())
    while t:
        n = int(input())
        if n%3==0:
            a = (n/3)+1
            b = n/3
            c = (n/3)-1
        elif n%3==1:
            a = (n+5)/3
            b = (n-1)/3
            c = (n-4)/3
        else:
            a = (n+4)/3
            b = (n+1)/3
            c = (n-5)/3
        print(b,a,c)
          
