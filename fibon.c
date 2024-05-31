#include<stdio.h>
int main ( )
{
    int i,a=0,b=1,c;
    printf("%d\n%d\n",a,b);

    for(i=0;i<=10;i=i+1)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
 b=c;
     }
     return 0;
}