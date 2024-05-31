#include<stdio.h>
//Program to find the rupee equivalent of U.S. dollars
int main()
{
    float rs;
    float usd;
    printf("enter nepali rupees:");
    scanf("%f",&rs);
    usd=rs/132;
    printf("the equivalent %f rupees is %f us dollar",rs,usd);

return 0;
}