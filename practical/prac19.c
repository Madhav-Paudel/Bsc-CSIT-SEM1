#include <stdio.h>

int main()
{
    int n, t, r;
    float si;
    printf("enter your balance :\n");
    scanf("%d", &n);
    printf("enter time:\n");
    scanf("%d", &t);

    if (n > 99999)
    {
        r = 7;
        si = (n * t * r) / 100;
        printf("the simple interest is %.2f by %d interest", si, r);
    }
    else if (n >= 50000 && n < 100000)
    {
        r = 5;
        si = (n * t * r) / 100;
        printf("the simple interest is %.2f by %d interest", si, r);
    }
    else if (n < 50000)
    {
        r = 3;
        si = (n * t * r) / 100;
        printf("the simple interest is %.2f by %d interest", si, r);
    }

    return 0;
}