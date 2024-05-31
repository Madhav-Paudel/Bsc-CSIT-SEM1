//Given an integer, write a program to check it for palindrome
#include<stdio.h>
int main()
{
    int n,temp,rev=0,digits;
    printf("enter the number checking the palindrome:\n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        digits=temp%10;
        rev=rev*10+digits;
        temp=temp/10;
    }
    if(n==rev)
    {
        printf("%d is palindrome number",n);

    }
    else 
    {
        printf("%d is not palindrome number",n);
    }
    return 0;
}