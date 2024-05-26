#include<stdio.h>
#include<stdlib.h>

void main()
{
    char *ptr;
    ptr=(char*)malloc(5*sizeof(char));
    printf("enter your name's letter:");
    for (int i = 0; i < 5; i++)
    {
    scanf(" %c",ptr+i);
    }
    printf("my name is:\n");
    ptr=(char*)realloc(ptr,10*sizeof(char));
    for(int i=0;i<5;i++)
    {
        printf("%c",*(ptr+i));
    }
    printf("\nreallocate the ptr variable:\n");
    ptr=(char *)realloc(ptr,10*sizeof(char));
    for(int i=5;i<10;i++)
    {
        printf("%c ",*ptr+i);
    }
}