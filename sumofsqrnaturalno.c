#include<stdio.h>
int main(){
    int a,i,sum=0;
    printf("enter the range from where to where you want to add the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum+=i*i;
        
    }
      printf("%d",sum);
    return 0;
}