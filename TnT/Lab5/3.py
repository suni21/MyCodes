class Complex ():
    def Complex(self):
        self.realPart = int(input("Enter Real no.= "))
        self.imgPart = int(input("Enter Imaginary no.= "))

    def print(self):
        print(self.realPart, "+", self.imgPart, "i", sep="")

    def sum(self, c1, c2):
        self.realPart = c1.realPart + c2.realPart
        self.imgPart = c1.imgPart + c2.imgPart


c1 = Complex()
c2 = Complex()
c3 = Complex()

print("Enter complex number1")
c1.Complex()
print("Complex Number1= ", end="")
c1.print()
print("")
print("Enter complex number2")
c2.Complex()
print("Complex Number2= ", end="")
c2.print()
print("")
print("Summation of Complex number ", end="")
c3.sum(c1, c2)
c3.print()