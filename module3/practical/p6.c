// Write a C program to print numbers from 1 to 10 using all three types of loops 
// (while, for, do-while). 

#include<stdio.h>
int main(){
    printf("\nWhile loop print 1 to 10");
    int i=1;
    while(i<=10){
        printf("\n%d",i);
        i++;
    }

 printf("\ndo While loop print 1 to 10");
 int j=1;
do{
    printf("\n%d",j);
    j++;

}while(j<=10);

printf("\n print 1 to 10 for loop");
for(int i=1;i<=10;i++){
    printf("\n%d",i);
}



}


