// Write a C program that stores 5 integers in a one-dimensional array and prints 
// them. Extend this to handle a two-dimensional array (3x3 matrix) and 
// calculate the sum of all elements. 

#include<stdio.h>


int main(){
    // int arr[5]={11,22,33,44,55};

    // for (int i=0;i<5;i++){
    //     printf("\n %d",arr[i]);
    // }


    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0,i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("\n");   
    }
    printf("sum is %d",sum);
    


}