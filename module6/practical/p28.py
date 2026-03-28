# Write a Python program to apply the map() function to square a list of numbers. 

def square(x):
    return x*2


list1=[1,2,3,4,5,6,7,8,9]
s1=map(square,list1)
print("Square of ",end=" ")
print(list(s1))


# • Write a Python program that uses reduce() to find the product of a list of numbers. 

from functools import reduce

def product(x,y):
    return x*y

list2=[1,2,3,4,5]
print("Product number is ",end=" ")
product_number=reduce(product,list2)

print(product_number)


# • Write a Python program that filters out even numbers using the filter() function.


def even_no(x):
    if x%2==0:
        return x

list3=[11,22,33,44,24,55,15,66,33]
even_number=filter(even_no,list3)
print("filter number of even number ",end=" ")
print(list(even_number))