
// Write a C program that defines a structure to store a student's details (name, 
// roll number, and marks). Use an array of structures to store details of 3 
// students and print them. 
#include<stdio.h>
struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main(){
    struct  Student s1[3];
    int i,j;

    for(i=0;i<3;i++){
       printf("\nenter the name");
       scanf("%s",s1[i].name);
      printf("\n enter the roll number ");
      scanf("%d",&s1[i].roll_no);
      printf("\n enter the marks ");
      scanf("%f",&s1[i].marks);
      
    }


for (i=0;i<3;i++){
    printf("\nName is %s Roll no is  %d marks is %.2f ",s1[i].name,s1[i].roll_no,s1[i].marks);
}
}

