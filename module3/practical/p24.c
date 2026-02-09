//  Write a C program that generates the Fibonacci sequence up to N terms using a recursive 
// function. 
// • Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative 
// and recursive methods. Compare their efficiency. 


// Efficiency Comparison
// 1️⃣ Recursive Method
// Time Complexity: O(2ⁿ)
// Reason: Same values are recalculated many times
// Memory: Uses extra stack space due to function calls
// Advantage: Simple and easy to understand
// Disadvantage: Very slow for large N
// 2️⃣ Iterative Method
// Time Complexity: O(N)
// Reason: Each Fibonacci number is calculated once
// Memory: Constant space (O(1))
// Advantage: Fast and efficient
// Disadvantage: Slightly more logic than recursion

#include<stdio.h>

int fib(int n ){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

// Iterative function
int fib_iterative(int n) {
    int a = 0, b = 1, c, i;

    if (n == 0)
        return 0;

    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main(){
    int n,i;
   printf("enter the N terms of Fibonacci sequence ");
   scanf("%d",&n);
  
   // Print Fibonacci sequence using recursion
    printf("Fibonacci sequence (using recursion):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

       // Calculate Nth Fibonacci number
    printf("\n\nNth Fibonacci number using recursion: %d", fib(n - 1));
    printf("\nNth Fibonacci number using iteration: %d", fib_iterative(n - 1));



}