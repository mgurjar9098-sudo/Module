//  Write a C program that checks whether a given number is a prime number or not using a for 
// loop. 
// • Challenge: Modify the program to print all prime numbers between 1 and a given number. 

#include<stdio.h>
int main(){

    // normal using  using for loop
    //  int no,i,count=0;
    //  printf("enter the number");
    //  scanf("%d",&no);
    //  for(i=1;i<=no;i++){
    //    if(no%i==0){
    //      count++;
    //    }
       
    //  }
    //  if(count==2){
    //     printf("prime number ");
    //  }else{
    //     printf("not prime number ");
    //  }


     // using givan number 

     int i,j,n,prime;
     printf("Enter size of n");
     scanf("%d",&n);
     printf("prime number \n");
     for(i=1;i<=n;i++){
        prime=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                prime++;
            }
        }
        if(prime==2){
            printf("%d ",i);
        }
     }



    
}