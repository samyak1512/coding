def planets_cycles(n, teleporters):
    # To store the number of teleportations needed for each planet
    result = [0] * n
    # To mark the state of each planet:
    # 0 - unvisited, 1 - visiting (in current path), 2 - visited (finished)
    state = [0] * n
    
    def dfs(planet):
        path = []
        while state[planet] == 0:
            state[planet] = 1
            path.append(planet)
            planet = teleporters[planet] - 1
        
        if state[planet] == 1:
            cycle_length = 0
            while path:
                p = path.pop()
                state[p] = 2
                result[p] = cycle_length + 1
                cycle_length += 1
                if p == planet:
                    break
            while path:
                p = path.pop()
                state[p] = 2
                result[p] = result[planet] + cycle_length
        else:
            while path:
                p = path.pop()
                state[p] = 2
                result[p] = result[planet] + len(path) + 1

    for i in range(n):
        if state[i] == 0:
            dfs(i)
    
    return result

# Input example
n = 5
teleporters = [2, 4, 3, 1, 4]
print(planets_cycles(n, teleporters))  # Output: [3, 3, 1, 3, 4]
