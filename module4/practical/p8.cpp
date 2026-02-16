// Write a C++ program that takes a student’s marks as input and calculates the grade 
// based on if-else conditions. 
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks "<<endl;
    cin>>marks;

    if(marks>=90){
        cout<<"A"<<endl;
    }else if(marks>=75 && marks<90){
        cout<<"B"<<endl;
    }else if(marks>=60 && marks<75 ){
        cout<<"C"<<endl;
    }else if(marks>=45 && marks<60){
        cout<<"D"<<endl;
    }else{
        cout<<"Fail";
    }


}