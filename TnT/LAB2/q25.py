binary=input("Enter the binary number(1 and 0): ")
decimal =int(binary,2)
print("Octal value: ", oct(decimal)[2:].upper())
print("Hexadecimal value: ",hex(decimal)[2:].upper())
