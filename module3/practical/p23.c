// Write a C program that takes N numbers from the user and stores them in an array. The 
// program should then calculate and display the sum of all array elements. 
// Challenge: Modify the program to also find the average of the numbers. 

#include<stdio.h>
int main(){
   int n,i,sum=0;
   float avg;
   printf("enter the number ");
   scanf("%d",&n);
   int arr[n];

   for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
   }
  
   printf("\nsum of elements is %d",sum);
   // Calculate average
   avg=(float)sum/n;
   printf("\navarage is %.2f",avg);
  
}