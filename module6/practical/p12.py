# Practical Example 8: Write a Python program to check if a person is eligible to donate blood 
# using a nested if. 

age=int(input("enter the number "))

if(age>=18):
    if(age<=60):
        print("You can donate")
    else:
        print('You can not donate')
    print("You are eligible ")
else:
    print("You are not eligible")
