a = int(input("Enter The 1st Number : "))
b = int(input("Enter The 2nd Number : "))

setA = set()
setB = set()



for i in range(1, a+1): 
    if (a%i == 0): 
        setA.add(i)
        
for j in range(1, b+1):
    if (b%j == 0):
        setB.add(j)
        
# print(setA)        
# print(setB)        
        
        
print(f"Common Factors Between {a} And {b} Are :-")
setC = setA.intersection(setB)
for cf in setC:
    print(cf)
    
    
print("-----------------------------")



print(f"The HCF Of {a} and {b} Is : {max(setC)}")