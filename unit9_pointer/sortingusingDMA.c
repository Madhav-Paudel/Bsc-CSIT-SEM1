#include<stdio.h>
#include<stdlib.h>

void sortingDMA(int *,int);
void main()
{
    //int a[5];// compile time 20 bytes memory allocated
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));//(int*)for typecast
    //in run time 20 bytes memory is allocated
    printf("enter the elements in the memory block:\n");
    printf("enter the values from %u address:\n",ptr);
    printf("before sorting:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("enter the value at address %u\n",ptr+i);
        scanf("%d",ptr+i);
    }
sortingDMA(ptr,5);
    printf("after sorting");
for(int i=0;i<5;i++)
{
     printf(" the value at address %u is %d\n",ptr+i,*(ptr+i));
        
}

}
void sortingDMA(int *p,int n)
{
     
    for (int  i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(*(p+i)>*(p+j))
            {
                int temp;
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
        
    }
    
}