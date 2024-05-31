#include<stdio.h>
 int main ()
 {
     int a,b;
     char n;

    printf("select m,s,a:\n");
    scanf("%c",&n);
    if( n =='m' || n =='M')
    {
      printf("enter number:");
      scanf("%d",a);
      printf("enter another:");
      scanf("%d",b);
      int mul=a*b;
      printf("the mult  of two num is %d ",mul);
      }
      else if (n=='a' || n=='A')
      {
         printf("enter number :");
         scanf("%d",&a);
         printf("enter another number :");
         scanf("%d",&b);
         int add=a+b;
         printf("the add of two num is %d ",add);
      }
      return 0;
     
    
 }