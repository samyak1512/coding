# import sys, os, io
# input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
import math
# Python Implementation
from typing import List


def rolling_hash(s: str, window_size: int, base: int = 26, mod: int = 10**9 + 7) -> List[int]:
	"""
	Calculates the rolling hash values of all substrings of length window_size in string s.
	Uses the polynomial rolling hash algorithm with base and mod as constants.

	:param s: the input string
	:param window_size: the size of the rolling window
	:param base: the base for the polynomial hash function
	:param mod: the modulus for the polynomial hash function
	:return: a list of hash values of all substrings of length window_size in s
	"""
	n = len(s)
	power = [1] * (n + 1)
	hash_values = [0] * (n - window_size + 1)

	# Precompute the powers of the
	# base modulo the mod
	for i in range(1, n + 1):
		power[i] = (power[i - 1] * base) % mod

	# Compute the hash value of
	# the first window
	current_hash = 0
	for i in range(window_size):
		current_hash = (current_hash * base + ord(s[i])) % mod

	hash_values[0] = current_hash

	# Compute the hash values of the
	# rest of the substrings
	for i in range(1, n - window_size + 1):

		# Remove the contribution of the
		# first character in the window
		current_hash = (
			current_hash - power[window_size - 1] * ord(s[i - 1])) % mod

		# Shift the window by one character
		# and add the new character
		# to the hash
		current_hash = (current_hash * base + ord(s[i + window_size - 1])) % mod

		hash_values[i] = current_hash

	return hash_values


# Driver code


# Input string

s = str(input())
t = str(input())
if(t>s):
    print(0)
else:
    
    # print(s)
    # print(t)
    # Window size
    window_size = len(t)

    # Calculate rolling hash values
    hash_values = rolling_hash(s, window_size)
    hasher = rolling_hash(t, len(t))

    # Print the hash values
    # print(hash_values)
    # print(hasher)

    count = 0
    for i in hash_values:
        if i == hasher[0]:
            # print("hi")
            count+=1
    print(count)
        

