a=int(input("Enter number= "))
b=int(input("Enter base= "))
ans = ""
while a>0:
        dig = int(a%b)
        if dig<10:
            ans += str(dig)
        else:
            ans += chr(ord('A')+dig-10)  #Using uppercase letters
        a //=b
ans = ans[::-1]

print(ans)