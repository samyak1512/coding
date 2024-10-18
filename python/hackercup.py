import sys
import math

def main():
    import sys

    input_file = '/Users/samyakjain/Downloads/trash/subsonic_subway_validation_input.txt'
    output_file = 'output_hackercup.txt'

    # Read input
    with open(input_file, 'r') as f:
        lines = f.read().splitlines()

    T = int(lines[0])
    Ns = [int(line.strip()) for line in lines[1:T+1]]
    N_max = max(Ns) if Ns else 0

    # Sieve of Eratosthenes
    sieve_size = N_max + 1
    sieve = bytearray([True]) * sieve_size
    sieve[0:2] = b'\x00\x00'  # 0 and 1 are not primes

    for current in range(2, int(math.isqrt(sieve_size)) + 1):
        if sieve[current]:
            sieve[current*2:sieve_size:current] = b'\x00' * len(sieve[current*2:sieve_size:current])

    # Generate list of primes
    primes = [p for p, is_p in enumerate(sieve) if is_p]

    # Initialize a boolean array to mark valid P's
    can_be_subtracted = bytearray(sieve_size)  # 0 = False, 1 = True

    # Iterate through each prime Q
    for Q in primes:
        # Iterate through primes R such that R <= Q - 2
        # since P = Q - R >= 2
        # Use binary search to find the upper limit for R
        left = 0
        right = len(primes) -1
        target = Q - 2
        while left <= right:
            mid = (left + right) // 2
            if primes[mid] <= target:
                left = mid +1
            else:
                right = mid -1
        # Now, primes[0 to right] are <= Q -2
        for R in primes[:left]:
            P = Q - R
            if P < 2:
                continue
            if P > N_max:
                break
            if sieve[P]:
                can_be_subtracted[P] = 1  # Mark P as valid

    # Create prefix sum array
    prefix_sum = [0] * (sieve_size)
    count = 0
    for i in range(2, sieve_size):
        if can_be_subtracted[i]:
            count +=1
        prefix_sum[i] = count

    # Prepare output
    with open(output_file, 'w') as f_out:
        for idx, N in enumerate(Ns, 1):
            if N >=2:
                res = prefix_sum[N]
            else:
                res =0
            f_out.write(f"Case #{idx}: {res}\n")

if __name__ == "__main__":
    main()
    
    
    
    import sys

def main():
    with open('input.txt', 'r') as f:
        input = f.read().split()
        
    with open('output.txt', 'w') as out_f:
        idx = 0
        T = int(input[idx]); idx += 1
        for test_case in range(1, T + 1):
            N = int(input[idx]); idx += 1
            lower_bound = 0.0
            upper_bound = float('inf')
            for i in range(1, N + 1):
                Ai = float(input[idx]); idx += 1
                Bi = float(input[idx]); idx += 1
                lower = i / Bi
                lower_bound = max(lower_bound, lower)
                if Ai > 0:
                    upper = i / Ai
                    upper_bound = min(upper_bound, upper)
            if lower_bound <= upper_bound + 1e-12:
                result = f"{lower_bound:.10f}".rstrip('0').rstrip('.')
                out_f.write(f"Case #{test_case}: {result}\n")
            else:
                out_f.write(f"Case #{test_case}: -1\n")

if __name__ == "__main__":
    main()
    
    
def main():
    with open('input.txt', 'r') as f:
        inp = f.read().split()
    
    with open('output.txt', 'w') as out:
        i = 0
        t = int(inp[i]); i += 1
        for tc in range(1, t + 1):
            n = int(inp[i]); i += 1
            lo = 0.0
            hi = float('inf')
            for j in range(1, n + 1):
                a = float(inp[i]); i += 1
                b = float(inp[i]); i += 1
                lo = max(lo, j / b)
                if a > 0:
                    hi = min(hi, j / a)
            if lo <= hi + 1e-12:
                res = f"{lo:.10f}".rstrip('0').rstrip('.')
                out.write(f"Case #{tc}: {res}\n")
            else:
                out.write(f"Case #{tc}: -1\n")

if __name__ == "__main__":
    main()