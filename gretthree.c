#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;

    printf("enter first number:\n");
    scanf("%d",&a);
    printf("enter second number:\n");
    scanf("%d",&b);
    printf("enter third number:\n");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("%d is greatest among %d and %d",a,b,c);

    }
    else if ( b>a && b>c)
{
    printf("%d is greatest among %d and %d ",b,a,c);
}
else if ( c>a && c>b)
{
    printf(" %d is greatest among %d and %d ",c,a,b);
}

}