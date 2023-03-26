import random

v=[]

for i in range(10):
    value = random.randint(1, 100) 
    v.append(value)

print( v)
f_half = sorted(v[:len(v)//2])

s_half = sorted(v[len(v)//2:], reverse=True)
sorted_v = f_half + s_half
print("Sorted v: ", sorted_v)
