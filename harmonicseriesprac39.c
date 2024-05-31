#include<stdio.h>
int main()
{ int n;
    float sum=0;
    printf("enter the number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=1.0/i;
    }
    printf("the sum of harmonic series is %.2f",sum);
    return 0;

}