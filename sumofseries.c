// find the sum of series (1+x^2+3x^2.......+nx^2)
#include<stdio.h>
#include<math.h>
int main()
{
    int terms;
    float sumseries=0.0,x;
    printf("How many geometric terms?\n");
    scanf("%d",&terms);
printf("value of x=\t");
scanf("%f",&x);
sumseries=1+pow(x,2);
for(int i=3)
}