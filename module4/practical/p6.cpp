// Write a C++ program that performs both implicit and explicit type conversions and 
// prints the results. 

#include<iostream>
using namespace std;

int main(){
     // --- Implicit Type Conversion ---
    int num1=20;
    float num2=20.20;
      
    // flaot is automatically converted to int during addition
    int result=num1+num2;
    cout<<"Implicit type Result is "<< result<<endl; 


    // --- Explicit Type Conversion (Type Casting) ---
        float num = 9.70;

          
     
    // Convert double to int explicitly
        int res=(int)num;
   

        cout<<"Explicit type Result is "<<res<<endl;







}