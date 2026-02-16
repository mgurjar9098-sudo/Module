// Write a C++ program that asks the user to guess a number between 1 and 100. The 
// program should provide hints if the guess is too high or too low. Use loops to allow 
// the user multiple attempts. 
#include<iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>    // for time()
using namespace std;
int main(){  
    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int maxAttempts = 7;
    int min = 1, max = 100;

    int answer = (rand() % (max - min + 1)) + min;

    printf("*** NUMBER GUESSING GAME ***\n");
    printf("I have selected a number between %d and %d.\n", min, max);
    printf("You have %d attempts to guess it.\n", maxAttempts);

    while (tries < maxAttempts) {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess < answer) {
            printf("TOO LOW\n");
        } else if (guess > answer) {
            printf("TOO HIGH\n");
        } else {
            printf("CORRECT!\n");
            break;
        }
    }

    if (guess != answer) {
        printf("Sorry! You've used all %d attempts. The number was %d.\n", maxAttempts, answer);
    }

    return 0;
}