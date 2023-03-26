
myDict = {'Suniti': 10, 'Pratyush': 9,
        'Jeev': 15, 'Yash': 2, 'Sunidhi': 32}
 
myKeys = list(myDict.keys())
myKeys.sort()
sorted_dict = {i: myDict[i] for i in myKeys}
 
print(sorted_dict)