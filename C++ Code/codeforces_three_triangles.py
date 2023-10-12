class Rotator:
    def rotate(self, A):
        A[:] = zip(*A[::-1])

    def rotate_anticlockwise(self, A):
        A[:] = list(zip(*A[::-1]))

t = int(input())
for _ in range(t):
    # Input data
    input_data = []

    # Taking input from the user
    rows = int(input("Enter the number of rows: "))
    for _ in range(rows):
        row = input("Enter a row: ")
        input_data.append(list(row))

    # Rotate the matrix anticlockwise
    rotator = Rotator()
    rotated_matrix_anticlockwise = input_data.copy()
    rotator.rotate_anticlockwise(rotated_matrix_anticlockwise)

    # Print the original matrix
    print("Original Matrix:")
    for row in input_data:
        print("".join(row))

    # Print the rotated matrix anticlockwise
    print("\nRotated Matrix (Anticlockwise):")
    for row in rotated_matrix_anticlockwise:
        print("".join(row))
