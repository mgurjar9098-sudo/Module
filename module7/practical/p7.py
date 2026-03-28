
# • Write a Python program to update a value in a dictionary. 


info={
    "id":101,
    "name":"ram",
    "age":18,
    "salery":22000,
    "location":"neemuch",
    "state":"india"    

}

info["age"]=33

print(info)




# • Write a Python program to merge two lists into one dictionary using a loop. 


dict={}

l1=[1,2,3,4]
l2=["apple","mango","banana","grapes"]


for i in range(len(l1)):
    dict.update({l1[i]:l2[i]})


print(dict)
