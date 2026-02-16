// Write a program that prints a right-angled triangle using stars (*) with a nested loop. 
#include<iostream>
using namespace std;
int main(){
    int i,j,rows,column;
    rows=5;
    column=5;
    for(i=1;i<=rows;i++){
        for(j=1;j<=column;j++){
            if(i>=j){
                cout<<"* ";
            }
            
        }
         cout<<endl;
       
    }

}