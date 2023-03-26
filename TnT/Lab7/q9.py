import numpy as np

arr = np.random.randint(1, 30, size=(5, 3))
print(arr)
a = np.delete(arr,[1], axis=1)
print("\n")
print(a)

