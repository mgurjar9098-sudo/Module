

// • Write a C program that takes an integer input from the user and prints its multiplication 
// table using a for loop. 
// • Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N). 

#include<stdio.h>

int main(){
    int n,i,j;
    printf("enter the no ");
    scanf("%d",&n);

     for(j=1;j<=n;j++){
          printf("\ntable no is %d",j);
        for(i=1;i<=10;i++){
         printf("\n%d * %d = %d",i,j,j*i);
    }
  

     }
    
}