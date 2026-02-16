// Write a C++ program to display the multiplication table of a given number using a for 
// loop. 

#include<iostream>
using namespace std;
int main(){
   int n,i;
   cout<<"enter the number "<<endl;
   cin>>n;
   for(i=1;i<=10;i++)
   {
      cout<<n <<" X "<<i <<" = "<<n*i<<endl;

   }

}