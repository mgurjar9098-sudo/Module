
// Write a program that demonstrates the difference between local and global 
// variables in C++. Use functions to show scope. 

// Explanation
// Global Variable
// Declared outside all functions.
// Accessible throughout the program.

// Local Variable
// Declared inside a function.
// Accessible only within that function.

#include<iostream>
using namespace std;
//globle varible
int x=12;

void f1(){
   // local variable 
    int x=14;

    cout<<"local variable is "<<x<<endl;
    cout << "Accessing global x using scope resolution operator ::x = " <<::x << endl;
}

int main(){
    // cout<<x<<endl;
    int x=13;
     f1();
     
     cout<<"gloable variable is "<<::x<<endl;
    cout<<x<<endl;

}