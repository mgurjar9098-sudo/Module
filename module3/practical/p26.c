
// • Write a C program that takes a number as input and checks whether it is a palindrome using 
// a function. 
// • Challenge: Modify the program to check if a given string is a palindrome. 
#include<stdio.h>
#include<string.h>

int palin_no(int no){
    int r,rev=0;
    while(no>0){
        r=no%10;
        rev=(rev*10)+r;
        no=no/10;

    }
    return rev;

}

/* Function to check if a string is a palindrome */
int isStringPalindrome(char str[]) {
    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;  // Not a palindrome
        }
    }
    return 1;  // Palindrome
}



int main(){
     int no;
    printf("enter the number");
    scanf("%d",&no);
   int res=palin_no(no);

   if(res==no){
    printf("Number is palindrome");

   }else{
    printf("number is not palindrom");
   }
  

    char str[100];

    /* String palindrome check */
    printf("\nEnter a string: ");
    scanf("%s", str);

    if (isStringPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

}