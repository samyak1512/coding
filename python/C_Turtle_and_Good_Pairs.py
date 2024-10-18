for _ in range(int(input())):
        freq = [0] * 26
        n = int(input())
        for char in input().strip():
            freq[ord(char) - ord('a')] += 1
        ans = []
        while any(freq):
            for i in range(26):
                if freq[i]:
                    ans.append(chr(i + ord('a')))
                    freq[i] -= 1

        print(''.join(ans))