/*Program to find out sum of all numbers completely divisible by 5 among n numbers given
by the user.*/
#include<stdio.h>
int main()

{
    int i,n,sum=0;
    printf("enter any 'N' number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%5==0)
        {
sum+=i;
        }
    }
printf("%d",sum);
}