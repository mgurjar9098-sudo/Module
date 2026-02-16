//  Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise 
// operators. Perform operations using each type of operator and display the results. 
#include<iostream>
using namespace std;

int main(){
    int num1,num2; 
    cout<<"enter the first number "<<endl;
    cin>>num1;
    cout<<"enter the second number "<<endl;
    cin>>num2;

    cout<<"------Arithmetic Operation ------"<<endl;
    cout<<"addition is "<<num1+num2<<endl;
    cout<<"Subtraction is "<<num1-num2<<endl;
    cout<<"Multiplication is "<<num1*num2<<endl;
    cout<<"Division is "<<num1/num2<<endl;
    cout<<"Modulas is " <<num1%num2<<endl;

     cout<<"------Relational Operation ------"<<endl;
    cout<<"greater is "<<(num1>num2)<<endl;
    cout<<"greater and equal is "<<(num1>=num2)<<endl;
    cout<<"less then is "<<(num1<num2)<<endl;
    cout<<"less then and equal is "<<(num1<=num2)<<endl;
    cout<<"equal is "<<(num1==num2)<<endl;
    cout<<"Not equal is "<<(num1!=num2)<<endl;
   
     cout<<"------Logical Operation ------"<<endl;
     cout<<"and operation is "<<((num1>num2)&& (num1==num2))<<endl;
    cout<<"and operation is "<<((num1>num2)|| (num1==num2))<<endl;
    cout<<"and operation is "<<(!num1>num2)<<endl;

     cout<<"------Bitwise Operation ------"<<endl;
     cout<<"Bitwise and operation "<<(num1 & num2)<<endl;
     cout<<"bitwise or  operation "<<(num1| num2)<<endl;

    

}