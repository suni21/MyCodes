import numpy as np

arr = np.random.randint(1, 30, size=(4, 3))
print(arr)
print("\nSort whole array: ")
print(np.sort(arr, axis=None))
print("\n Sort element in each row: ")
print(np.sort(arr))