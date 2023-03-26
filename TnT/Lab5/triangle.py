class Triangle:
    def input(self):
        self.b = 0
        self.h = 0

    def getData(self):
        self.b = float(input("\nEnter base= "))
        self.h = float(input("Enter height= "))

    def areaTrin(self):
        area = 1/2 * self.b * self.h
        return area


triangle = []

for i in range(5):
    print(f"\nEnter value of Triangle{i+1}: ")
    t = Triangle()
    t.getData()
    triangle.append(t)

for i, t in enumerate(triangle):
    print(f"Area of triangle {i+1} = {t.areaTrin():.2f} sq unit")