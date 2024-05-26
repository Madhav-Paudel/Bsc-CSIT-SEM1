#include<stdio.h>
void main()
{
    void *vptr;
    int a=400;
    vptr =&a;
    printf("value of a using void pointer=%d\n",*((int*)vptr));
    float b=300;
    vptr=&b;
    printf("value of a using void pointer =%.2f\n",*((float*)vptr));
    char c='H';
    vptr=&c;
    printf("value of is character is=%c\n",*((char*)vptr));

}