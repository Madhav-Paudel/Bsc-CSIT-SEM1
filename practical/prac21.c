/*21. A leap year should meet the following condition:
a) For non-century years it should be exactly divisible by 4.
b) For century years it should be exactly divisible 400.
Write a program to check a year for leap.*/
#include<stdio.h>
int main()
{
    int year;
    printf("leap year starting from 1900 to 2100");
    for (year = 1900; year <=2000; year++)
    {
        if(year % 400==0 || (year%100!=0 && year % 4==0) )
        {
            printf(" %d\t",year);
        }
    }
    return 0;
}