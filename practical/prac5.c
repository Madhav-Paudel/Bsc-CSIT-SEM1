//Program to find power of a given number. Hint: pow(a,b), a and b are user inputs.

#include<stdio.h>
#include<math.h>

int main ()
{  
    int a,b;
   double power;
    printf("enter any number (for base): ");
    scanf("%d",&a);
    printf("enter number for power (exponent):");
    scanf("%d",&b);
    power=pow(a,b);
printf("the power is %.2lf",power);
return 0;
} 