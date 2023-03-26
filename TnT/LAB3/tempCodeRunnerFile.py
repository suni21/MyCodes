def swapList(newList):
    size = len(newList)
     
    temp = newList[0]
    newList[0] = newList[size - 1]
    newList[size - 1] = temp
     
    return newList
newList = [122, 5, 92, 56, 294]
 
print(swapList(newList))