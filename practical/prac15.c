#include <stdio.h>
int main()
{
    int n;
    float a;
    printf("enter purchase amount for discount:\n");
    scanf("%d", &n);
    a = (5.0 / 100) * n;
    if (n >= 1000)
    {
        printf("you get  discount is Rs%f:", a);
    }
    else
    {
        printf("for discount purchase goods of 1000 or more than 1000");
    }
}