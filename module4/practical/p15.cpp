
// Write a C++ program that accepts an array of integers, calculates the sum and 
// average, and displays the results. 

#include<iostream>
using namespace std;

int main(){
    int n,i,sum=0;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the  elements "<<endl;
    for(i=0;i<n;i++){
      cin>>arr[i];
      sum=sum+arr[i];
    }
    cout<<"array is "<<endl;
     for(i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<"\nSum is "<<sum<<endl;
    float avg=sum/n;
    cout<<"Avarege is "<<avg;
}