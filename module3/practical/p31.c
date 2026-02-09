#include <stdio.h>


// Recursive function to calculate nCr (binomial coefficient)
int combination(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    }
    return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main() {
    // int n, i, j;
    // long long coeff;

    // printf("Enter the number of rows: ");
    // scanf("%d", &n);

    // for (i = 0; i < n; i++) {
    //     coeff = 1; // first coefficient in a row is always 1

    //     // Print leading spaces for formatting
    //     for (j = 0; j < n - i - 1; j++) {
    //         printf("  ");
    //     }

    //     for (j = 0; j <= i; j++) {
    //         printf("%4lld", coeff);  // print current coefficient
    //         coeff = coeff * (i - j) / (j + 1); // calculate next coefficient
    //     }

    //     printf("\n"); // move to next row
    // }


    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Print leading spaces for formatting
        for (j = 0; j < n - i - 1; j++) {
            printf("  ");
        }

        // Print each element in the row
        for (j = 0; j <= i; j++) {
            printf("%4d", combination(i, j));
        }
        printf("\n");
    }
   

    
}
