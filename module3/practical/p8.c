
// Write a C program that calculates the factorial of a number using a function. 
// Include function declaration, definition, and call. 


#include<stdio.h>
void fact_pro(int n); // function declaration

int main(){
    int n;
    printf("enter the factorial number ");
    scanf("%d",&n);
    fact_pro(n); // function calling

    
}
void fact_pro(int fn){   // function defination
    int i=1,fact=1;

    while(i<=fn){
        fact=fact*i;
        i++;
    }
    printf("\nFactorial is %d",fact);

    
}