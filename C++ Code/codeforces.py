def problems_solved(t, testcases):
    results = []
    
    for _ in range(t):
        n, contest_log = testcases[_]
        solved_problems = 0
        time_spent = 0

        for i in range(n):
            time_spent += i + 1  # Monocarp spends i+1 minutes on problem i ('A' is 0, 'B' is 1, ..., 'Z' is 25)
            if time_spent >= ord(contest_log[i]) - ord('A') + 1:
                solved_problems += 1

        results.append(solved_problems)

    return results

# Example usage:
t = 3
testcases = [(6, "ACBCBC"), (7, "AAAAFPC"), (22, "FEADBBDFFEDFFFDHHHADCC")]
output = problems_solved(t, testcases)

for result in output:
    print(result)
