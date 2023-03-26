
r= int(input("Number of rows:"))
c = int(input("Number of columns:"))

matrix = [ ]
for i in range(r):   #row    
    a =[ ]
    for j in range(c): #column    
         a.append(int(input()))
    matrix.append(a)
for i in range(r):
    for j in range(c):
        print(matrix[i][j], end = " ")

    print( )