#include<stdio.h>
void main()
{
    int a=20,b=30;
    int *pa,*pb;
    pa=&a;
    pb=&b;
    if(pa<pb)
    {
        printf("%d is allocated at %u which ia before %d allocated at %u",a,pa,b,pb);
    }
    else
    {
        printf("%d is allocated at %u which ia after %d allocated at %u",b,pb,a,pa); 
    }
}