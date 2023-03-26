import numpy as np

arr = np.random.randint(1, 101, size=(4, 3))

max_val = np.max(arr)
min_val = np.min(arr)

print("Array:\n", arr)
print("Maximum number:", max_val)
print("Minimum number:", min_val)