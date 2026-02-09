//  Write a C program that accepts 10 integers from the user and stores them in an array. The 
// program should then find and print the maximum and minimum values in the array. 
// • Challenge: Extend the program to sort the array in ascending order.
#include<stdio.h>
int main(){
    int arr[10],n=10,i,max,min;
    printf("enter the number");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
     for(i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
      max=arr[0];
      min=arr[0];

    for(i=0;i<n;i++){
        if(arr[i]>max){ 
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\nminimum value is %d",min);
    printf("\nmaximum value is %d",max);

   int j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){

            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }

        }
    }
    
//using bubble sort
  printf("\nassecending order is : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);

    }



        

}