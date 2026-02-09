//  Write a C program that accepts two 2x2 matrices from the user and adds them. Display the 
// resultant matrix. 
// • Challenge: Extend the program to work with 3x3 matrices and matrix multiplication. 

#include<stdio.h>

int main(){
    int A[2][2], B[2][2], C[2][2];
    int i, j;

    // Input first matrix
    printf("Enter elements of first 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Add matrices
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    printf("Resultant matrix (Addition):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }


    int a1[3][3],b1[3][3],mul[3][3];

    printf("enter the first 3*3 metrix");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a1[i][j]);
        }
    }
     printf("enter the second  3*3 metrix");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b1[i][j]);
        }
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            mul[i][j]=a1[i][j]*b1[i][j];
        }
    }

     printf(" multiplication metrix \n");

      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }

     
}