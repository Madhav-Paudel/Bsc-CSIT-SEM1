/*Program to determine the sum of the harmonic series (1+ 1/2 + 1/3 + 1/4 + ... + 1/n) for a
given value of n.*/

 
 #include<stdio.h>
 int main()
 {
     int n,i;
     float sum=0.0;
     printf("enter the number\n");
     scanf("%d",&n);
     printf("series is");
     for(i=1;i<=n;i++)
     {
         sum=sum+(1.0/i);
         printf("%d + 1/%d\t",1,i);
     }
     printf("\nthe sum is %f",sum);
     return 0;
 }