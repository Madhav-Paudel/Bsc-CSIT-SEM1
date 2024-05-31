#include<stdio.h>
int main()
{
    int a,b;
    printf("enter any number:\n");
    scanf("%d",&a);
    printf("enter another number:");
    scanf("%d",&b);
    a=a+b;// 100+200=300
    b=a-b;// 300-200=100
    a=a-b;//300-100=200
    printf("the out put is %d:%d",a,b);
    return 0;

}