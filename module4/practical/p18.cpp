// Write a C++ program that defines a class Calculator with functions for addition, 
// subtraction, multiplication, and division. Create objects to use these functions. 

#include<iostream>
using namespace std;
  class Calculator{
        int a,b;
        public:
        Calculator(int p,int q){
            a=p;
            b=q;

        }
        public:
        void additon(){
            cout<<"Addition is "<<a+b<<endl;
        }
        void subtraction(){
            cout<<"Subtraction is"<<a-b<<endl;
        }
        void multiplication(){
            cout<<"Multiplication is "<<a*b<<endl;
        }
        void division(){
            cout<<"Division is "<<a/b<<endl;
        }
    };

int main(){
    Calculator c1(35,10);
    c1.additon();
    c1.subtraction();
    c1.multiplication();
    c1.division();
  

}