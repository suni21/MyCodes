n=int(input("Enter the value of n: "))
for i in range (1,n+1):
    if(i%2!=0):
        for j in range(1,i+1):
            print(j,end=" ")
    else:
        for j in range(i,0,-1):
            print(j,end=" ")
    print()
