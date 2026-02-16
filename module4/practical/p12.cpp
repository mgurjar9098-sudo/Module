// Write a C++ program that defines functions for basic arithmetic operations (add, 
// subtract, multiply, divide). The main function should call these based on user input. 

#include<iostream>
using namespace std;

int calculator(string o,int n,int n2){
    if(o =="+"){
        cout<<"Addtion is "<<n+n2<<endl;
    }else if(o =="-"){
       cout<<"Subtraction  is "<<n+n2<<endl;
    }else if(o =="*"){
       cout<<"Multiplication  is "<<n+n2<<endl;
}else if(o =="/"){
       cout<<"Division is "<<n+n2<<endl;
}else if(o =="%"){
       cout<<"Division is "<<n+n2<<endl;
}else{
    cout<<"invalid operator"<<endl;
}

}

int main(){
    string op;
    int num1,num2,res;
    cout<<"enter the operator"<<endl;
    cin>>op;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    calculator(op,num1,num2);


}