#include<stdio.h>
void main()
{
    int val=100;
    int *ptr;
    ptr=&val;
    printf("address of ptr=%u\n",ptr);
    printf("the value is %d",*ptr);

}