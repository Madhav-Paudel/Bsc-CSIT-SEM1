#include<stdio.h>

int main()
{
 int c;
    float f;
    printf("enter temperature in celsius:\n");
    scanf("%d",&c);

    f=(9*c)/5+32;
    printf("the temperature is %f is in fahrenheit",f);
    return 0;
}