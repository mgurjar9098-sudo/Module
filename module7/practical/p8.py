# Write a Python program to create a function that takes a string as input and prints it. 

def user_input(str):
    print(str)

user_input("python")


# • Write a Python program to create a calculator using functions. 


def calculator(num1,num2,op):

    if op=='+':
        print(f"Addition is {num1+num2}")
    elif op=='-':
        print(f"Subtraction is {num1-num2}")
    elif op=='*':
        print(f"Multiplication is {num1*num2}")
    elif op=='/':
        print(f"Division  is {num1/num2}")
    elif op=='%':
        print(f"Modulas is {num1%num2}")
    else:
        print("Invalid operation ")


num1=int(input("enter the num1 ::"))
num2=int(input("enter the num1 ::"))
op=input("enter the operation")

calculator(num1,num2,op)