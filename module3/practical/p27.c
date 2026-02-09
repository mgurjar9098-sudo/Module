
// Write a C program that takes a string as input and reverses it using a function. 
// • Challenge: Write the program without using built-in string handling functions. 
#include <stdio.h>
#include<string.h>

/* Function to reverse a string */
void reverseString(char str[]) {
    int i = 0, j;
    char temp;

    /* Find length of string manually */
    while (str[i] != '\0') {
        i++;
    }
    j = i - 1;   // Last character index

    /* Reverse the string */
    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    //using build in function
    printf("reverse string is %s",strrev(str));

    return 0;
}
