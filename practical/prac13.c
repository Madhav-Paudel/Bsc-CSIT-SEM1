//Program to sum the digits of a positive integer which is 5 digits long.
#include<stdio.h>
int main()
{
 int num,rem,sum=0;
 printf("enter any number:");
 scanf("%d",&num);
 while (num!=0)
 {
rem=num%10;
sum=sum+rem;
num=num/10;

 }
 printf("%d",sum);
 return 0;
 
}