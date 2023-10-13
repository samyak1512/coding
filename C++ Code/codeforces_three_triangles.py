t = int(input())
def rotate(self, A):
        A[:] = zip(*A[::-1])
for _ in range(t):
    input_data = []

    # Taking input from the user
    rows = int(input())
    for _ in range(rows):
        row = input()
        input_data.append(list(row))

    # Rotate the matrix anticlockwise
    # rotator = Rotator()
    rotated_matrix_anticlockwise = input_data.copy()
    rotate(rotated_matrix_anticlockwise)

    # Print the original matrix
    print()
    for row in input_data:
        print("".join(row))

    # Print the rotated matrix anticlockwise
    print()
    for row in rotated_matrix_anticlockwise:
        print("".join(row))
