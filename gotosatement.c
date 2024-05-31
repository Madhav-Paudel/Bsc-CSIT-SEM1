#include<stdio.h>
int main()
{
    int number,fact=1;
    positivenumber:
    printf("enter any number:\n");
    scanf("%d",&number);
    if(number<0)
    {
        goto positivenumber;
    }
    for(int i=1;i<=number;i++)
    fact=fact*i;
    printf("factorial=%d",fact);
}