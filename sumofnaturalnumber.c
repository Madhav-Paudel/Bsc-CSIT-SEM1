#include<stdio.h>
int main()
{
    int a,i,sum =0;
    printf("enter number\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
      sum+=i;
    }
    printf("%d",sum);

}