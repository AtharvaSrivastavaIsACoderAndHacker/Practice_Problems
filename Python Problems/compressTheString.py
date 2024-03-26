string = input()


listOfIntegers = []
strr = str(string)
for i in range(len(strr)-1):
    listOfIntegers.append(int(strr[i]))


count = 0
prev = None
listOfTuples = []



for sn,i in enumerate(listOfIntegers):
    count+=1
    if sn != len(listOfIntegers)-1:
        if listOfIntegers[sn+1] != i:
            listOfTuples.append((count, i))
            count = 0
    else:
        count+=1
        listOfTuples.append((count, i))
        
    prev = i
    
    
    
    
finalStr = ""
for i in listOfTuples:
    finalStr = finalStr + str(i)
    finalStr = finalStr + " "
    
    
print(finalStr)