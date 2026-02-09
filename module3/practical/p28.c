#include<stdio.h>

int main(){

    char str[200];
    int vowels = 0, consonants = 0, digits = 0, special = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = str[i];

        /* Check for vowels and consonants */
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        /* Check for digits */
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        /* Check for special characters (excluding newline) */
        else if (ch != ' ' && ch != '\n') {
            special++;
        }

        i++;
    }

    printf("\nNumber of vowels: %d", vowels);
    printf("\nNumber of consonants: %d", consonants);
    printf("\nNumber of digits: %d", digits);
    printf("\nNumber of special characters: %d\n", special);

}