n=int(input("Enter number= "))
s=0
for i in range(1,n+1):
    s=s+n*i
    n=n-1
print("sum of series: ",s)