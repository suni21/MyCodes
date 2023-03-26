s = input("Enter a string: ")
r = s[::-1]
for i in range(0,len(s)):
 for j in range(0,len(s)-i):
    print(s[j],end="")
 for k in range(0,i):
     print(" ",end="")
 for k in range(0,i):
     print(" ",end="")   
 for j in range(i,len(r)):
    print(r[j],end="")
 print()
for i in range(0,len(s)):
 for j in range(0,len(s)-i):
    print(s[j],end="")
 for k in range(0,i):
     print(" ",end="")
 for k in range(0,i):
     print(" ",end="")   
 for j in range(i,len(r)):
    print(r[j],end="")