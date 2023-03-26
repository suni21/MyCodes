import numpy as np

matrix = np.random.randint(1, 10, size=(10, 10))

blocks = []

for i in range(8):
    for j in range(8):
        block = matrix[i:i+3, j:j+3]
        blocks.append(block)
        
for block in blocks:
    print(block)
