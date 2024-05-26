/*Write a menu driven program to perform the following operations.
a. Read two arrays a[M] and b[N] of size M and N.
b. Sort both arrays in ascending order.
c. Find minimum element of a.
d. Find maximum element of b.
e. Exit*/



#include<stdio.h>


int main()
{
    int a[100],b[100],i,j,p,q,temp,max,min;
    char choice;
    printf("how many element you want to enter in first and second arrays:\n");
    scanf("%d %d",&p,&q);
    printf("enter the arrays in a[M]");
    for(i=0;i<p;i++)//for the value of a[M]
    {
        scanf("%d",&a[i]);
        
    }
    printf("enter the arrays in b[N]");
     for(i=0;i<q;i++)//for the value of b[N]
    {
        scanf("%d",&b[i]);
        
    }
    printf("enter 'b' for making arrays ascending\n'c' for smallest element\n'd' for largest elements \n 'e' for exitting:\n");
    scanf(" %c",&choice);
   
    switch(choice)//for menu
   {
        case 'b':
   // Printf("ascending for a[M]");
    for(i=0;i<p;i++)//sorting the elements of the a[M]
    {
        for(j=i+1;j<p;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nascending for a[M]\n");
    for(i=0;i<p;i++)//for the output of a[m]
    {
        printf("%d",a[i]);
        
    }
    
    
      for(i=0;i<q;i++)//sorting the elements of the b[N]
    {
        for(j=i+1;j<q;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    printf("\nascending for b[N]\n");
    for(i=0;i<q;i++)//for the output of b[N]
    {
        printf("%d",b[i]);
        
    }
    break;
    case 'c':
    min=a[0];
    for(i=0;i<p;i++)
    {
        if(a[i]<a[0])
        {
            min=a[i];
        }
    }

   
       printf("%d is the minimum value in arrays a[M]\n",min);
   min=b[0];
    for(i=0;i<q;i++)
    {
        if(b[i]<b[0])
        {
            min=b[i];
        }
    }
  printf("%d is the minimum value in arrays b[N]\n",min);
  break;
    case 'd':
    max=a[0];
    for(i=0;i<p;i++)
    {
        if(a[i]>a[0])
        {
            max=a[i];
        }
    }
 printf("%d is the maximum value in arrays a[M]\n",max);
   max=b[0];
    for(i=0;i<q;i++)
    {
        if(b[i]>b[0])
        {
            max=b[i];
        }
    }
    printf("%d is the maximum value in arrays b[N]\n",max);
    break;
    case 'e':
break;
default:
break;

   }

    return 0;
}