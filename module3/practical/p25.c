// Write a C program that calculates the factorial of a given number using a function. 
// • Challenge: Implement both an iterative and a recursive version of the factorial function and 
// compare their performance for large numbers. 


// Performance Comparison
// 1. Iterative version
// Uses a loop
// No function call overhead
// Faster and safer for large values
// Preferred in production code

// 2. Recursive version
// Clear and mathematically elegant
// Slower due to repeated function calls
// Risk of stack overflow for large n

#include<stdio.h>

int fact(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int fact_rec(int n){
    if(n==0 || n==1)
    return 1;
    else{
           return n*fact(n-1);
         
    }
 
}

int main(){
    int n;
    printf("enter the factorial number is ",n);
    scanf("%d",&n);
    int res=fact(n);
    printf("\nFactorial is %d",res);

    printf("\nrecusive function is %d",fact_rec(n));

}