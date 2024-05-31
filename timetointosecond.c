#include<stdio.h>
int main()
{
    int hh,mm,ss;
    int a,b,c;
    printf("enter time duration in hh/mm/ss:");
    scanf("%d  %d %d",&hh,&mm,&ss);
a=hh*3600;
b=mm*60;
c=a+b+ss;
printf("the time duration is in second %d",c);

}