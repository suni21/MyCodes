class Time():
    def getdata(self):
        self.hour=int(input("Enter hour= "))

        self.minute=int(input("Enter minutes= "))
        self.sec=int(input("Tnter seconds= "))

    def display(self):
        print(self.hour,"hours",self.minute,"minutes",self.sec,"seconds")

    def add(self,a,b):
        self.sec= int(a.sec+b.sec)%60
        c=int(a.sec+b.sec)/60
        self.minute=int(a.minute+b.minute+c)%60
        c=int(a.minute+b.minute+c)/60
        self.hour=int(a.hour+b.hour+c)
a=Time()
b=Time()
ans=Time()
print("Enter data2(hh:mm:ss)")
a.getdata()
print("Time1= ")
a.display()

print("Enter data2(hh:mm:ss)")
b.getdata()
print("Time1= ")
b.display()
print("\n")
ans.add(a,b)
print("\nAddition Of Time= ")
ans.display()