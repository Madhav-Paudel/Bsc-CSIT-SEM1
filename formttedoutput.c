#include<stdio.h>

int main()
{
    int a=28;
    float x=11.123456;
    printf("%-6d\n",a);// create 4 whitespace after a number 
    printf("%+d\n",a);// insert + before number(making positve)
    printf("%09d\n");//remaining wide contain 0
    printf("%d\n");//whitespace
    printf("%#o\n",a);// octal--#gives actual formatting of octal number
    printf("%#0x\n",a);// hexadecimal--#gives actual formatting of hec number
    printf("%7.2f\n",x);//precision fotmat %wp

}