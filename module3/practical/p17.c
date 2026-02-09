//  Write a C program that takes three numbers from the user and determines: 
// The largest number. 
// The smallest number. 
// • Challenge: Solve the problem using both if-else and switch-case statements. 

#include<stdio.h>

int main(){

    int num1,num2,num3;
    printf("enter the  first number ");
    scanf("%d",&num1);
    printf("enter the second number ");
    scanf("%d",&num2);
    printf("enter the third number ");
    scanf("%d",&num3);
   // largest number 
    if(num1>num2 && num1>num3){
        printf("\nfirst number is largest %d :",num1);
    }else if(num2>num1 && num2>num3){
        printf("\nsecond number is largest %d :",num2);
    }else{
        printf("\nthird number is largest %d :",num3);
    }

    //smallest number
       if(num1<num2 && num1<num3){
        printf("\nfirst number is smallest %d :",num1);
    }else if(num2<num1 && num2<num3){
        printf("\nsecond number is smallest %d :",num2);
    }else{
        printf("\nthird number is largest %d :",num3);
    }
 

    //using switch case 
    int a,b,c;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

     // Largest number
    switch ((a >= b && a >= c) ? 1 : (b >= a && b >= c) ? 2 : 3) {
        case 1:
            printf("Largest number: %d\n", a);
            break;
        case 2:
            printf("Largest number: %d\n", b);
            break;
        case 3:
            printf("Largest number: %d\n", c);
            break;
    }

    // Smallest number
    switch ((a <= b && a <= c) ? 1 : (b <= a && b <= c) ? 2 : 3) {
        case 1:
            printf("Smallest number: %d\n", a);
            break;
        case 2:
            printf("Smallest number: %d\n", b);
            break;
        case 3:
            printf("Smallest number: %d\n", c);
            break;
    }

}