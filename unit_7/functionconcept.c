//syntax-datatype functionname(datatype variable1,datatype variable2,..........,datatype variable n)
#include<stdio.h>
int factorial(int);
void main()
{

float nCr;
int n,,r,fact1,fact2,fact3;//function prototype or declaration
printf("enter the values of n and r:\n");
scanf("%d %d",&n,&r);
fact1=factorial(n);
fact2=factorial(n-r);
fact3=factorial(r);
nCr=(float)(fact1/(fact2*fact3));
printf("nCr-%.0f",nCr);
}
int factorial(int n)//function definition
{
int fact=1;
for(int i=1;i<=n;i++)
{
    fact*=i;
}
return fact;

}