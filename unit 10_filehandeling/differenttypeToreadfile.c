#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    FILE *fptr;
    fptr=fopen("test.txt","r");
    fscanf(fptr,"%d",&num);
    
    if(fptr==NULL)
    {
        printf("errot!opening file");//program to exit file 
        exit(1);
    }
    else
    {
        printf("file is found hehe!\n");
        printf("%d",num);
    }
}