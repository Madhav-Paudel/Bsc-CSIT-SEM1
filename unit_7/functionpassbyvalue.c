#include<stdio.h>
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}
void main()
{
    int x=100,y=200;
    printf("(%d,%d) before swap\n",x,y);
    swap(x,y);
     printf("(%d,%d) after swap\n",x,y);
     
}