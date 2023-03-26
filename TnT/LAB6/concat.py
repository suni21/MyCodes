import numpy as np

arr1 = np.array(["Hello", "!"])
arr2 = np.array(["World",  "!"])

Concat = np.char.add(arr1, arr2)

print("Concated String: ")
print(Concat)