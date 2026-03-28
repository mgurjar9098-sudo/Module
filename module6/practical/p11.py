# practical Example 7: Write a Python program to calculate grades based on percentage using 
# if-else ladder. 

mark1=75
marks2=75
marks3=75

avg=(mark1+marks2+marks3)/3
print("Your percentage is ",avg)

if(avg>=90):
    print('A+ grade')

elif(avg>=75):
    print("A grade")

elif(avg>=60):
    print("B grade")

elif(avg>=45):
    print("C grade")

elif(avg>=35):
    print("D grade")

else:
    print("fail")