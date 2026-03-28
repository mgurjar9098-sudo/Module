# Practical Example 6: Write a Python program to check if a number is prime using if_else. 

num1=int(input("enter the number "))

if(num1>1):
    for i in range(2,num1):
        if(num1%i==0):
            print(num1, " is not a prime number ")
            break
    else:
        print(num1," is a prime number ")
else:
    print(num1," is not a prime number ")

        
