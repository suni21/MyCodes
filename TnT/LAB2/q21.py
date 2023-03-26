from math import factorial
a=int(input("enter size= "))

for i in range(a):
    for j in range(a-i+1):
        print(end=" ")
    for j in range(i+1):
        print(factorial(i)//(factorial(j)*factorial(i-j)),end=" ")
        
    print()