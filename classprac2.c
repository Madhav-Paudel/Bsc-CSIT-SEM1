#include<stdio.h>
int main()
{
    int h,b;
    float a;
    printf("enter height of triangle:");
    scanf("%d",&h); 
    printf("enter base of trinangle:");
    scanf("%d",&b);
    a=0.5*b*h;
    printf("the area of triangle is %f",a);

return 0;
}