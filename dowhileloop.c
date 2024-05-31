#include<stdio.h>
int main()
{
    int num,counter,sum=0;
    char choice;
    do{
        printf("enter any number:\n");
        scanf("%d",&num);
        sum+=num;
        printf("Enter Y to continue and else to exit");
        scanf("%c",&choice);
      
        
    }
      while (choice=='Y');

      printf("sum=%d",sum);
        
         
        
}