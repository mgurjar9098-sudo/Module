
// • Write a C program that takes an integer from the user and checks the following using 
// different operators: 
// o Whether the number is even or odd. 
// o Whether the number is positive, negative, or zero. 
// o Whether the number is a multiple of both 3 and 5. 

#include<stdio.h>

int main(){

     int no;
     printf("enter the number ");
     scanf("%d",&no);
  
    // Check even or odd
     if(no%2==0){
        printf("\n number is  even");
     }
     else{
        printf("\n number is odd");
    }


       // Check positive, negative, or zero
    if(no>0){
    printf("\nnumber is positive");
    }else if (no==0)
    {
    printf("\nnumber is zero");
    }else{
    printf("\nnumber is negetive");
    }
 

    // Check multiple of both 3 and 5
    if(no%3==0 && no%5==0){
    printf("\nnumber is multiple of both 3 and 5");
    }else{
    printf("\nnumber is multiple of not  both 3 and 5");

    }
    
     

}