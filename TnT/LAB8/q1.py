import pandas as pd

ds1 = pd.Series([21, 45, 96])
ds2 = pd.Series([12, 83, 69])

ds = ds1 + ds2
print("Addition:")
print(ds)
print("Subtraction:")
ds = ds1 - ds2
print(ds)
print("Multiplication:")
ds = ds1 * ds2
print(ds)
print("Division:")
ds = ds1 / ds2
print(ds)