#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("enter any value :");
    scanf("%d",&a);
    printf("enter another value:");
    scanf("%d",&b);
    printf("before swapping value(%d:%d)\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping value(%d:%d)",a,b);
    return 0;
}