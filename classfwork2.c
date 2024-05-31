#include <stdio.h>
int main()
{
    int n;
    float a, b, c;
    printf("enter your income:");
    scanf("%d", &n);
    if (n < 10000)
    {
        printf("your income is tax free:");
    }
    else if (n >= 10000 && n <= 19999)
    {
        a = (10.0 / 100) * n;
        printf("you have to pay %f of %d", a, n);
    }
    else if (n >= 20000 && n >= 39999)
    {
        b = n * (15.0 / 100);
        printf("you have to pay %f of %d", b, n);
    }
    else
    {
        c = n * (20.0 / 100);
        printf("you have to pay %f of %d", c, n);
    }
    return 0;
}