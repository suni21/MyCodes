class items:
    code=""
    name=""
    price=0    
    quantity=0

    def getData(self):
        'Enter the details: '
        self.code=input("Code: ")
        self.name=input("Name of item: ")
        self.price=int(input("Price of item: "))
        self.quantity=int(input("Quantity: "))
    
    def getTotal(self):
        Total=self.price*self.quantity
        return Total
        
Items=[]
n=int(input("Enter number of items= "))
for i in range(n):
    print("\nEnter details of item[",i+1,"]")
    it = items()
    it.getData()
    Items.append(it)

sum_total=0
print("Sl. No.\tCode\tName\t\tPrice\t\tQuantity\tTotal")
for i, it in enumerate(Items):
    total = it.getTotal()

    print(i+1,"\t",it.code,"\t",it.name,"\t\t",it.price,"\t\t",it.quantity,"\t\t",it.getTotal())
    sum_total += total
print("-----------------------------------------------------------------")
print("\t\t\t\t\tTotal= Rs.",sum_total)