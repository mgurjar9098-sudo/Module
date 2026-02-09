// Write a C program that accepts two integers from the user and performs 
// arithmetic, relational, and logical operations on them. Display the results. 



#include<stdio.h>
int main(){
    int a,b;
    printf("\n  enter the value of a and b : ");
    scanf("%d %d",&a,&b);

    printf("\narithmetic Operation");
    printf("\n addition is %d",a+b);
    printf("\n subtraction is %d",a-b);
    printf("\n multiplication is %d",a*b);
    printf("\n division is %d",a/b);
    printf("\n modulus is %d",a%b);

printf("\n");


    printf("\nrelational operation");
    printf("\n a is greater then b %d",a>b);
    printf("\n a is less then b %d",a<b);
    printf("\n a is greater and equal b %d",a>=b);
    printf("\n a is less and equal b %d",a<=b);
    printf("\n a is equal b %d",a==b);
    printf("\n a is not equal b %d",a!=b);

printf("\n");

    printf("\n logical Operator");
    printf("\n logical and %d ",(a>b)&&(a>=b));
    printf("\n logical or %d",(a>b)&&(a>=b));
    printf("\n not(!) logical  %d",!(a<b));





}