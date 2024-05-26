#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    FILE *fptr;
    fptr=fopen("test.txt","w");//w mode
    printf("enter the value of n that is to be written in a file:\n");
    scanf("%d",&num);
    
   //write n to a file
   fprintf(fptr,"the num=%d",num);
}