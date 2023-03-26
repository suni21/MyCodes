import numpy as np

A = np.array([[17, 24, 1, 8, 15], 
              [23, 5, 7, 14, 16], 
              [4, 6, 13, 20, 22], 
              [10, 12, 19, 21, 3], 
              [11, 18, 25, 2, 9]])


row_sums = np.sum(A, axis=1)
column_sums = np.sum(A, axis=0)


diagonal1_sum = np.sum(np.diag(A))
diagonal2_sum = np.sum(np.fliplr(A).diagonal())

expected_sum = row_sums[0]


assert np.all(row_sums == expected_sum)
assert np.all(column_sums == expected_sum)
assert diagonal1_sum == expected_sum
assert diagonal2_sum == expected_sum

print("A is a magic square")
