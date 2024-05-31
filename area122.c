#include<stdio.h>
#include<math.h>
int main () 
{
    float area;
int a,b,c;
                  printf("enter first side of triangle:\n");
                   scanf("%d",&a);
                       printf("enter second side of triangle:\n");
                            scanf("%d",&b);
                                    printf("enter third side of triangle:\n");
                                          scanf("%d",&c);
                           float s =(a+b+c)/2.0;
              area =sqrt(s*(s-a)*(s-b)*(s-c));
             printf("the semi perimeter of triangle is %2f and area of triangle is %2f",s,area);
    
    return 0;
    
}