def can_capture_white_stones(board):
    def is_valid_move(row, col):
        return 0 <= row < R and 0 <= col < C

    def dfs(row, col):
        if not is_valid_move(row, col) or visited[row][col] or board[row][col] == 'B':
            return

        visited[row][col] = True
        for dr, dc in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            new_row, new_col = row + dr, col + dc
            if is_valid_move(new_row, new_col) and not visited[new_row][new_col]:
                dfs(new_row, new_col)

    R, C = len(board), len(board[0])
    visited = [[False] * C for _ in range(R)]
    # print(visited)

    for row in range(R):
        for col in range(C):
            if board[row][col] == 'B':
                continue

            # Check if placing a black stone at this position captures white stones
            board_copy = [list(row) for row in board]
            board_copy[row][col] = 'B'
            print(board_copy)
            visited = [[False] * C for _ in range(R)]
            dfs(row, col)

            white_captured = all(visited[i][j] or board_copy[i][j] == 'B' for i in range(R) for j in range(C))
            if white_captured:
                return True

    return False

def solve_test_case(test_case, board):
    if can_capture_white_stones(board):
        print(f"Case #{test_case}: YES")
    else:
        print(f"Case #{test_case}: NO")

# Sample Input
T = int(input())
for test_case in range(1, T + 1):
    R, C = map(int, input().split())
    board = [input().strip() for _ in range(R)]
    solve_test_case(test_case, board)
