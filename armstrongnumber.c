// program to find a number is armstrong   .
#include <stdio.h>
#include <math.h>
int main()
{
    int num, digit, sum = 0;
    int temp1, temp2;
    printf("enter number to be checked:\n");
    scanf("%d", &num);
    temp1 = num;
    temp2 = num;
    int count = 0;

    while (temp2 != 0)
    {
        count++;
        temp2 /= 10;
    }
    printf("count=%d\n",count);

    while (num != 0)
    {
        digit = num % 10;
        sum =sum + pow(digit,count);
        num =num/ 10;
    }
    if (temp2 == sum)
    {
        printf("Armstrong Number!!!!");
        printf("\nSum is  %d", sum);
    }
    else
    {
        printf(" Not Armstrong Number");
        printf("\nSum is  %d", sum);
    }
}