//  Write a C program that takes an integer from the user and calculates the sum of its digits 
// using a while loop. 
// • Challenge: Extend the program to reverse the digits of the number. 

#include<stdio.h>


int main(){
    int no,r,sum=0,rev=0;
    printf("enter the number ");
    scanf("%d",&no);

    while(no>0){
        r=no%10;
        sum=sum+r;
        rev=(rev*10)+r;
        no=no/10;
    }
    printf("\nsum of digits %d",sum);
    printf("\nreverse number is %d",rev);



}