#include <stdio.h>
int main()
{
    int n;
    printf("enter any number for finding odd or even:");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("this is even number");
    }
    else
    {
        printf("this is odd number");
    }
    return 0;
}