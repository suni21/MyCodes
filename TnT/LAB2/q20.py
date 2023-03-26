n=int(input("Enter the value of n: "))
t=0
for i in range(4,0,-1):
    for j in range(1,t+1):
        print(" ",end="")
    for j in range(1,i+1):
        print(j,end="")
    for j in range(i-1,0,-1):
        print(j,end="")
    print()
    t=t+2