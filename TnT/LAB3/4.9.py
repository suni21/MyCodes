def returnSum(myDict):
 
    list = []
    for i in myDict:
        list.append(myDict[i])
    final = sum(list)
 
    return final
 

dict = {'a': 800, 'b': 100, 'c': 3900}
print("Sum= ", returnSum(dict))