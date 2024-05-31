#include<stdio.h>
#define PI 3.14
int main(){
    int r1,r2,r3;
    float a1,a2,a3;
    printf("enter first radius of circle:");
    scanf("%d",&r1);
      printf("enter second radius of circle:");
    scanf("%d",&r2);
      printf("enter third radius of circle:");
    scanf("%d",&r3);
    a1=PI*r1*r1;
    a2=PI*r2*r2;
    a3=PI*r3*r3;
    printf("the area of first radius is%.2f\nfor second is%.2f\n for third is%.2f",a1,a2,a3);
    return 0;

}