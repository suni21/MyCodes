import numpy as np 

n = int(input("Enter the matrix size: ")) 
matrix = np.zeros((n, n), dtype=int) 
i = n // 2 
j = n - 1 
for num in range(1, n**2+1): 
    if matrix[i][j] != 0: 
        i = (i + 1) % n 
        j = (j - 2) % n 
    matrix[i][j] = num 
    i = (i - 1) % n 
    j = (j + 1) % n 
print("The resulting magic square matrix is:") 
for row in matrix:
    print(row)