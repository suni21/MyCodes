import numpy as np

rows = 5
cols = 7
arr = np.zeros((rows, cols))

arr[0, :] = 1
arr[-1, :] = 1

arr[:, 0] = 1
arr[:, -1] = 1

print(arr)
