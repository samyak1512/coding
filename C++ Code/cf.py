from decimal import Decimal

N = int(input())
K = int(input())
T = int(input())
R = int(input())

SINR = [[float(i) for i in input().split()] for _ in range(K)]
interference = [[float(i) for i in input().split()] for _ in range(K)]
frame_info = [[int(i) for i in input().split()] for _ in range(K)]


# Initialize the variables
b = [[[0 for t in range(T)] for k in range(K)] for n in range(N)]
p = [[[0 for t in range(T)] for k in range(K)] for n in range(N)]

# For each TTI of each cell
for t in range(T):
 for k in range(K):
     # Calculate the transmission SINR of user n in cell k
     SINR_nk = [SINR[n][k] - sum(interference[n][k] for k_prime in range(K) if k_prime != k) for n in range(N)]
     # Assign the RBG of cell k to user n at TTI t based on the SINR
     for n in range(N):
         b[n][k][t] = SINR_nk[n]
     # Calculate the actual transmitted bits for the frame
     g_j = sum(b[n][k][t] for n in range(N))
     # If g_j is not less than the size of the frame, the frame is successfully transmitted
     for n in range(N):
         if g_j >= frame_info[n][k]:
             p[n][k][t] = 1
         else:
             p[n][k][t] = 0

# Output the optimization result of p(k)rnt in decimal format
for n in range(N):
 for k in range(K):
     print((p[n][k][t]))
