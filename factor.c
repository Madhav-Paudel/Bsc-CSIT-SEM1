#include<stdio.h>

int main ( )
{
    int i,a,c=0;
    printf("enter any number :");
    scanf("%d",&a);

    for (i=1;i<=a;i=i+1)
    {
        if (a%i==0)
        {
            printf("%d\n",i);
            c=c+1;
                
    }



}
 printf("%d is total number ",c);
            
    return 0;
}