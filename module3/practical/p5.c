// Write a C program to check if a number is even or odd using an if-else 
// statement. Extend the program using a switch statement to display the month 
// name based on the user’s input (1 for January, 2 for February, etc.).



#include<stdio.h>
int main(){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    if(n%2==0){
        printf("Number is even");
    }else{
        printf("Number is Odd");
    }


int m;
printf("\nenter the month of number ( --1 to 12 --): ");
scanf("%d",&m);

    switch (m)
    {
    case 1:
    printf("\nJanuary");
        break;
    
    case 2:
    printf("\nFabruary");
    break;

    case 3:
    printf("\nMarch");
    break;

    case 4:
    printf("\nApril");
    break;

    case 5:
    printf("\nMay");
    break;

    case 6:
    printf("\nJune");
    break;

    case 7:
    printf("\nJuly");
    break;

    case 8:
    printf("\nAugust");
    break;

    case 9:
    printf("\nSeptember");
    break;

    case 10:
    printf("\nOctober");
    break;

    case 11:
    printf("\nNovember");
    break;

    case 12:
    printf("\nDecember");
    break;

    
    default:
    printf("Invalid Choice");
        break;
    }
}