// Program to display your name 10 times using all the three looping statements.
#include<stdio.h>
int main()
{
    int i;
    char name[20];
    printf("enter your name \n");
    scanf("%s",&name);
    for(i=0;i<10;i++)
    {
        printf("%s\t",name);
    }
    while(i<20)
 
    {
        i++;
        printf("%s\t",name);
     
    }
    do
    {
        i++;
    printf("%s\t",name);
    } while (i<30);
    return 0;
    
}