// write a program to convert decimal no.to binary
#include<stdio.h>
void main()
{
    long int decnum,rev = 0, q = 1, rem, i = 1;
    printf("\n Enter decimal number:\t");
    scanf("%ld", &decnum);
    while (q != 0)
    {
        q = decnum / 2;
        rem = decnum % 2;
        decnum=q;
        rev = rev + rem * i;
        
        i = i * 10;
    }
    printf("the binary number is%ld", rev);
}