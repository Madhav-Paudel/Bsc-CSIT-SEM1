/*22. Rates of tax on gross salary are as shown below:
23. Income Tax
Less than 10,000 Nill
Rs. 10,000 to 19,999 10%
Rs. 20,000 to 39,999 15%
Rs. 40,000 to above 20%
Write a program to compute the net salary after deducting the tax for the given information.*/



#include<stdio.h>

int main()
{
    int n;
    float a,b,c,d;
    printf("enter your income\n");
    scanf("%d",&n);

if(n<10000)
{
    printf("you don't have to pay tax");
}
else if (n>=10000 && n<19999)

{a=(10.0/100)*n;
    printf(" you have to  pay Rs%f as a tax",a);

}
else if(n>=20000 && n>39999)
{
    b=(15.0/100)*n;
    printf("you have to pay Rs%f",b);

}
else if(n>=40000)
{
    c=(20.0/100)*n;
    printf("you have to pay Rs%f",c);
}
}