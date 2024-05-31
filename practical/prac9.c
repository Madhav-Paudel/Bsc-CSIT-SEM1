#include <stdio.h>
// Program to convert pounds to kilograms.
int main()
{
    int a;
    float pounds;
    printf("enter the weight in pounds:");
    scanf("%d", &a);

    pounds = a * 0.453492;
    printf("the weight is %f in kilogram(kg) ", pounds);
    return 0;
}