/*Program to add, subtract, multiply, and divide two whole numbers.*/
#include<stdio.h>
int main () 
{
int a,b;
printf("enter first number:\n");
scanf("%d",&a);
printf("enter second number:\n");
scanf("%d",&b);
int addition=a+b;
float divide=a/b;
int subtract=a-b;
int multi=a*b;


printf("the multiplication  is %d\n",multi);
printf("the addition  is %d\n",addition);
printf("the divide   is %f\n",divide);
printf("the subtraction  is %d\n",subtract);
return 0;

}