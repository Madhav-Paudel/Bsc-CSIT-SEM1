//Given an integer, write a program to reverse and print it.


#include<stdio.h>
int main()
{
    int n,digit,rev=0,i;
    printf("enter number for reverse ");
    scanf("%d",&n);
   while(n!=0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
        

    }
    printf("%d",rev);
    

    return 0;
    
}