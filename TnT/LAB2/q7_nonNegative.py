def power(x, n):

    pow = 1

    for i in range(n):
        pow = pow * x
 
    return pow

x= int(input("Enter x= "))
n=int(input("Enter n= "))
print("y=",(power(x, n)))