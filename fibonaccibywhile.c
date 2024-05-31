//fibonacci by using while
#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i=1;
    printf(" How many terms you wants");
    scanf("%d",&n);
    printf("%d\t %d\t",a,b);
    while (i<n-1)
    {
    i++;
    c=a+b;
    printf("%d\t",c);
    a=b;
    b=c;
    }
    
}