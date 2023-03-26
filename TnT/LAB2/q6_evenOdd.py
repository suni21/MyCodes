Lower_Num=int(input("Enter num1= "))
Upper_Num=int(input("Enter num2(limit)= "))

print("Even Numbers: ")
for i in range(Lower_Num,Upper_Num+1):
    if(i%2==0):
        print(i)
print("Odd Numbers")
for i in range(Lower_Num,Upper_Num+1):
    if(i%2==1):
        print(i)