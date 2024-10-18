def main():
    def eval_seq(seqs):
        return ["YES" if s[1][0] != s[1][-1] else "NO" for s in seqs]

    n = int(input())
    seqs = [(int(input()), input().strip()) for _ in range(n)]
    
    for o in eval_seq(seqs):
        print(o)

if __name__ == "__main__":
    main()