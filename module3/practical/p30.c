
// Write a C program that checks whether a given number is an Armstrong number or not (e.g., 
// 153 = 1^3 + 5^3 + 3^3). 
// • Challenge: Write a program to find all Armstrong numbers between 1 and 1000. 

#include <stdio.h>

int main() {
    int i, num, no, r, sum;

    printf("Armstrong numbers between 1 and 1000:\n");

    for(i = 1; i <= 1000; i++) {
        num = i;
        sum = 0;
        no = num;

        // Calculate sum of cubes of digits
        while(no > 0) {
            r = no % 10;
            sum += r * r * r;
            no /= 10;
        }

        if(sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}

    

    


