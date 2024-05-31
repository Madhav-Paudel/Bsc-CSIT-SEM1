#include<stdio.h>
//odd or even number
int main(){
   /*int a;
    printf("enter any number\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("number is even");

    }
    else
    {
         printf("number is odd");
    }*/ 
    int a,i;
    printf("enter number 1 to n number\n");
    scanf("%d",&a);
    for(i=1;i<=a;i=i+1)
    {
if(i%2==0)
{
    printf("%d\t",i);
}
    }
 return 0;   
}

