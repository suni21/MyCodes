def swapList(newList):
    size = len(newList)
     
    temp = newList[0]
    newList[0] = newList[size - 1]
    newList[size - 1] = temp
     
    return newList
newList = [34, 50, 12, 2]
 
print(swapList(newList))