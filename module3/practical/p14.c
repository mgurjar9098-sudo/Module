//  Write a C program that acts as a simple calculator. The program should take two numbers 
// and an operator as input from the user and perform the respective operation (addition, 
// subtraction, multiplication, division, or modulus) using operators. 
// • Challenge: Extend the program to handle invalid operator inputs.


#include<stdio.h>


int main(){
    int num1,num2;
    char op;
    printf("\nenter the operation (+,-,*,/,%%,) ");
    scanf("%c",&op);
    printf("\nenter the first number ");
    scanf("%d",&num1);
     printf("\nenter the second number ");
    scanf("%d",&num2);

    switch(op){

        case '+':
        printf("\nAddtion is %d",num1+num2);
        break;

         case '-':
        printf("\nSubstraction  is %d",num1-num2);
        break;

         case '*':
        printf("\nMultiplication is %d",num1*num2);
        break;

         case '/':
        printf("\nDivision is %d",num1/num2);
        break;

         case '%':
        printf("\nModulas is %d",num1%num2);
        break;

        default:
        printf("invalid operation");

    }


}