import numpy as np

matrix = np.zeros((4, 4))

for i in range(3):
    matrix[i, i+1] = i+1
    matrix[i+1, i] = i+1

print(matrix)
