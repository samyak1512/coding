for _ in range(int(input())):
    n = int(input())
    bosses = list(map(int, input().split()))
    
    # dp[i][j] = state{
    #     min no of skip points required to defeat the jth boss
    #     i: whose turn it is, 0 for our turn, 1 for friends turn
    # }
    
    dp = [[float("inf")] * (n + 1) for _ in range(2)]

    dp[0][0] = 0  # Our friend needs to use zero points to fight no bosses.

    for j in range(len(dp[0]) - 1):

        # The opposite player switches on the previous move.
        dp[1][j + 1] = min(dp[1][j + 1], dp[0][j] + bosses[j])
        dp[0][j + 1] = min(dp[0][j + 1], dp[1][j])

        # The opposite player switches from the previous two moves.
        if j + 2 < len(dp[0]):
            dp[1][j + 2] = min(dp[1][j + 2], dp[0][j] + bosses[j] + bosses[j + 1])
            dp[0][j + 2] = min(dp[0][j + 2], dp[1][j])

    print(min(dp[0][n], dp[1][n]))