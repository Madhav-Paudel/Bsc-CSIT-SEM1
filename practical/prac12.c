//Program to print a six digit integer in reverse order.
#include<stdio.h>
int main ()
{
    int num,digit;
    printf("enter six digit number:\n");
    scanf("%d",&num);
    for (int i = 1; i<=num; i++)
    {
        digit=num%10;
        printf("%d",digit);
        num=num/10;
    }
    return 0;
    
}