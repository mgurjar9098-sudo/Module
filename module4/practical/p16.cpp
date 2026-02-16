//  Write a C++ program to perform matrix addition on two 2x2 matrices. 
#include<iostream>
using namespace std;

int main(){
    int a[2][2]={{1,2},{3,4}};
    int i,j,sum=0;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum=sum+a[i][j];

        }
    }
    cout<<"Sum is "<<sum<<endl;

}