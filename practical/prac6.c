#include<stdio.h>
 //Program to find area and circumference of circle.

#define pi  3.14
int main ()
{
    int r;
    int area,circumference;

    printf("enter radius for calculation:\n");
    scanf("%d",&r);
    area=pi*r*r;
    circumference=2*pi*r;
    printf("the area of circle is %d\n and the circumefernce is %d",area,circumference);
    return 0;
 

}