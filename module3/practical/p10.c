
// Write a C program to demonstrate pointer usage. Use a pointer to modify the 
// value of a variable and print the result. 

#include<stdio.h>
int main(){
     int num = 10;
    int *ptr;

    ptr = &num;      // pointer stores address of num
    *ptr = 20;       // modify value using pointer

    printf("Value of num: %d\n", num);
}