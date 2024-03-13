def dfs(vis, cnt, v, i, j, pi, pj, id, count1):
    if cnt[i][j] == id:
        return 0, (-1, -1)
    if vis[i][j]:
        return 0, (-1, -1)
    cnt[i][j] = id
    if v[i][j] == '.':
        return 1, (i, j)
    if v[i][j] == 'B':
        return 0, (-1, -1)
    vis[i][j] = 1
    count1[0] += 1
    X = [0, 0, 1, -1]
    Y = [1, -1, 0, 0]
    n, m = len(vis), len(vis[0])
    count = 0
    p1 = (-1, -1)
    for k in range(4):
        x, y = i + X[k], j + Y[k]
        if x == pi and y == pj:
            continue
        if x >= n or x < 0 or y < 0 or y >= m:
            continue
        p = dfs(vis, cnt, v, x, y, i, j, id, count1)
        count += p[0]
        if p[1][0] != -1:
            p1 = p[1]
    if count > 1:
        p1 = (-1, -1)
    return count, p1


def main():
    testc = 1
    testc = int(input())
    for T in range(1, testc + 1):
        print(f"Case #{T}: ", end="")
        n, m = map(int, input().split())
        v = [input() for _ in range(n)]
        vis = [[0] * m for _ in range(n)]
        ans = [[0] * m for _ in range(n)]
        cnt = [[-1] * m for _ in range(n)]
        chk = 0
        ans1 = 0
        for i in range(n):
            for j in range(m):
                count1 = [0]
                if v[i][j] == 'W' and vis[i][j] == 0:
                    c = dfs(vis, cnt, v, i, j, -1, -1, m * i + j, count1)
                    if c[0] <= 1:
                        ans[c[1][0]][c[1][1]] += count1[0]
                        ans1 = max(ans1, ans[c[1][0]][c[1][1]])
        print(ans1)


if __name__ == "__main__":
    main()
