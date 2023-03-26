a=int(input("enter size= "))
i,j=0,0
for i in range(1,a+1):
    for j in range(i,0,-1):
        print(chr(ord('A')+j-1),end =" ")
        
    print()