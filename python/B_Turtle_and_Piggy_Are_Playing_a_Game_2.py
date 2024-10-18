def maximize_good_pairs():
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        s = input().strip()
        
        sorted_s = ''.join(sorted(s))
        
        print(sorted_s)

if __name__ == "__main__":
    maximize_good_pairs()