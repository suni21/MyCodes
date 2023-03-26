import numpy as np

arr1 = np.random.randint(1, 50, size=(3, 2))
print("Array 1: ")
print(arr1)

arr2 = np.random.randint(1, 50, size=(3, 2))
print("\nArray 2: ")
print(arr2)

arr =np.concatenate((arr1,arr2))
print("\nConcatenated Array: ")
print(arr)