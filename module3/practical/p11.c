// write a C program that takes two strings from the user and concatenates them 
// using strcat(). Display the concatenated string and its length using 
// strlen(). 
#include<stdio.h>
#include<string.h>

int main(){
    char  name[50],lasName[50];
    printf("\nenter the name : ");
    gets(name);
    printf("\n enter the last name ");
    gets(lasName);

    char con[50];
    strcat(name,lasName);
    puts(name);

    printf("length is %d",strlen(name));



}