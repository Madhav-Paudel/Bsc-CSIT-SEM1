#include<stdio.h>
int main()
{
   float mm,m,cm;
    
    printf("enter the length in milimeter:\n");
    scanf("%f",&mm);
   m=mm/1000;
   cm=mm/10;

    printf("the given %f millimeter length is %f meter\n",mm,m);
    printf("the given %f millimeter length is %f centimeter\n",mm,cm);
    printf("the length is %f millimeter",mm);
    return 0;
    
}