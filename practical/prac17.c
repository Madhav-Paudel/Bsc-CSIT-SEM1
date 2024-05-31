#include <stdio.h>
int main()
{
    int n;
    float a, b, c, d, e;
    printf("enter purchage amount for discount:\n");
    scanf("%d", &n);
    if (n >= 5000)
    {
        a = (10.0 / 100) * n;
        printf("you get Rs:%f discount\n", a);
    }
    else if (n >= 4000 && n < 5000)
    {
        b = (7.0 / 100) * n;
        printf("you get Rs:%f discount\n", b);
    }
    else if (n >= 3000 && n < 4000)
    {
        c = (5.0 / 100) * n;
        printf("you get Rs:%f discount\n", c);
    }
    else if (n >= 2000 && n < 3000)
    {
        d = (3.0 / 100) * n;
        printf("you get Rs:%f discount\n", d);
    }
    else if (n < 2000)
    {
        e = (2.0 / 100) * n;
        printf("you get Rs:%f discount\n", e);
    }
    else
    {
        printf("you have enter wrong value");
    }
    return 0;
}