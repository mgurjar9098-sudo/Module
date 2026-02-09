// Write a C program to create a file, write a string into it, close the file, then 
// open the file again to read and display its contents. 


#include<stdio.h>
int main(){
    FILE *fl;
       char st[50]="welcome to c programing";
        
    /* Create and write to the file */
       fl= fopen("abc.txt","w");
       if(fl!=NULL){
        printf("\nfile is created ");
       }
       fprintf(fl,"%s",st);

       fclose(fl);

       char st2[50];
    
    
    /* Open the file for reading */
       fl=fopen("abc.txt","r");

       
    /* Read and display the content */
       while(fscanf(fl,"%s",st2)==1){
         printf("%s ",st2);

       }
       fclose(fl);
}