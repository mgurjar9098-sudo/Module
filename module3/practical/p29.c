// • Write a C program that counts the number of words in a sentence entered by the user. 
// • Challenge: Modify the program to find the longest word in the sentence. 
#include<stdio.h>
int main(){
    char sentence[1000];
    char longest[1000] = "";
    char current[1000];

    int i = 0, j = 0;
    int wordCount = 0;
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        if (!isspace(sentence[i])) {
            // Build the current word
            current[j++] = sentence[i];
        } else if (j > 0) {
            // End of a word
            current[j] = '\0';
            wordCount++;

            if (j > maxLength) {
                maxLength = j;
                strcpy(longest, current);
            }
            j = 0;
        }
        i++;
    }

    // Handle last word if sentence doesn't end with space
    if (j > 0) {
        current[j] = '\0';
        wordCount++;

        if (j > maxLength) {
            strcpy(longest, current);
        }
    }

    printf("Number of words: %d\n", wordCount);
    printf("Longest word: %s\n", longest);


}