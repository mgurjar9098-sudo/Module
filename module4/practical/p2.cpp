// Basic Input/Output 
// o Write a C++ program that accepts user input for their name and age and then 
// displays a personalized greeting. 
// o Objective: Practice input/output operations using cin and cout. 

#include<iostream>
using namespace std;
int main(){
    string name;
    int age;
    cout<<"Enter the name : "<<endl;
    cin>>name;
    cout<<"Enter the age : "<<endl;
    cin>>age;

    cout<<"Good morning "<<name<<endl;
    
    cout<<"Your age is "<<age<<endl;

}