# Write a c function that generates the first 10 even numbers. 


def even(x):

    for i in range(0,x+1):
        if i%2==0:
            yield i


f1=even(10)

# print(next(f1))
# print(next(f1))
# print(next(f1))
# print(next(f1))
# print(next(f1))
# print(next(f1))

# other way to print even number 

for i in f1:
    print(i)
