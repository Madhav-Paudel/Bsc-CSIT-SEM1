#include<stdio.h>
//Program to find area and perimeter of a rectangle
int main ()
{
    int l,b;
    int area,perimeter;
    printf("enter length:\n");
    scanf("%d",&l);

    printf("enter breadth:\n");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("the area of rectangle is %d\n and the perimeter is %d",area,perimeter);
    return 0;

}