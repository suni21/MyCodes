import math
n=int(input("Enter the value of n: "))
temp=0
i=3
while temp<n:
    count=0
    for j in range(2,int(math.sqrt(i))+1):
        if(i%j==0):
            count=count+1
    if(count==0):
        print(i)
        temp=temp+1
    i=i+1


