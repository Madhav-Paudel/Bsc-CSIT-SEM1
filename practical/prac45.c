// Program that computes the sum of the digits of the given integer number.
#include<stdio.h>
int main()
{
    int n,digit,rev=0;
    printf("enter the number\n");
    scanf("%d",&n);
    while (n!=0)
    {
    digit=n%10;
    rev=rev+digit;
    
    n=n/10;
    }
    printf("%d",rev);
    return 0;
    
    
    
    
    
    }