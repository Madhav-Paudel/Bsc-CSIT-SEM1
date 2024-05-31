/*Write a program using switch statement to develop a simple calculator for +, -, *, /, and %
operators*/
#include<stdio.h>
int main()
{
    int a,b,add,subtraction,multiply,modulo;
    float divide;
    char choice;
    printf("enter a for addition \n s for subtraction\n m for multiply \n d for divide \n o for modulo ");
    scanf("%c",&choice);
    printf("enter first number:\n");
    scanf("%d",&a);
    printf("enter second number:\n");
    scanf("%d",&b);
    switch (choice)
    {
    case'a':
       add=a+b;
       printf("the sum is %d",add);
        break;
        case's':
    subtraction=a-b;
       printf("the subtraction  is %d",subtraction);
        break;
        case'm':
       multiply=a*b;
       printf("the multiplication  is %d",multiply);
        break;
        case'd':
       divide=a/b;
       printf("the division is %f",divide);
        break;
          case'o':
       modulo=a%b;
       printf("the modulo  is %d",modulo);
        break;
    
    default:
    printf("error 40000000444");
        break;
    }
}