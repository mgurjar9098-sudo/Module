
# 16) Write a Python program to separate keys and values from a dictionary using 
# keys() and values() methods. 

info={
    "id":101,
    "name":"ram",
    "age":18,
    "salery":22000,
    "location":"neemuch",
    "state":"india"    

}

print(info.keys())
print(info.values())

#  18) Write a Python program to count how many times each  character appears in a string. 

str="hello world"

freq={}
for i in str:
    if i != " ":
        freq[i]=freq.get(i,0)+1

    
print(freq)
