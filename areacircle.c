#include<stdio.h>
# define PI 3.14

int main( )
{
    int r;
printf("enter radius:\n");
scanf("%d",&r);
float area =PI*r*r;
printf("the area of circle is %.2f",area);
return 0;
}