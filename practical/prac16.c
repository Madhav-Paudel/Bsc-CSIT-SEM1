#include<stdio.h>
int main()
{
    int n;
    float a,b;
    printf("enter the purchase amount:\n");
    scanf("%d",&n);
    a=(5.0/100)*n;
    b=(3.0/100)*n;
    if(n>=1000)
    {
        printf("you get Rs:%f discount",a);

    }
    else{
        printf("you get Rs:%.2f discount",b);
    }
    
    
    
    
    
    
    
    
    
    }