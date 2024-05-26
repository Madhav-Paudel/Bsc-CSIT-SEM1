#include<stdio.h>
float product(int,float);//function prototype
void main()
{
    int val1;
    float val2;
    float result;
    printf("enter two values:\n");
    scanf("%d %f",&val1,&val2);
    result=product(val1,val2);
    printf("result =%.2f",result);
}
float product(int a,float b)
{
    return a*b;
}