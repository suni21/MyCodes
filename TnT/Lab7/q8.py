import numpy as np

arr = np.random.randint(1, 30, size=(4, 3))
print(arr)
print("\n")
arr[arr >4]=20
print(arr)
