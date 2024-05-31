/*Jet Company gives 5% commission to its salesman if their monthly sales are less than Rs.
10,000 and a 10% commission if it is equal to or greater than Rs. 10,000. Write a program to
calculate commission at the end of the month*/
#include<stdio.h>
int main()
{
    int n;
    float a,b;
    printf("enter the amount of monthly sales");
    scanf("%d",&n);
    if(n<10000)
    {
        a=(5.0/100)*n;
        printf("Rs :%f is commission amount for the sale of Rs :%d amount",a,n);
    }
    else
    {
        a=(10.0/100)*n;
        printf("Rs :%f is commission amount for the sale of Rs :%d amount",b,n);  
    }
    return 0;
}