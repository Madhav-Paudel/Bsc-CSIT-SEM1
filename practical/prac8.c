#include <stdio.h>
//Program to find price of n mangos given the price of a dozen mangos
int main()
{

    int a, n, c;

    float b;
    printf("enter the price of one dozen mangos:\n");
    scanf("%d", &c);
    b = c / 12;
    printf("enter the number of mango you want to buy:");
    scanf("%d", &n);
    a = n * b;
    printf("the price of %d mango is %d", n, a);
    return 0;
}