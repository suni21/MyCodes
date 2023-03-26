n = int(input("Enter number of terms: "))
for i in range(0, n+1):
    for j in range(i, i+i):
        print(j%2," ", end="")
    print()