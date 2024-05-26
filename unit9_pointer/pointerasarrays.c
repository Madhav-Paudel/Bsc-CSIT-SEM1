#include<stdio.h>
#include<stdlib.h>

void main()
{
    //int a[5];// compile time 20 bytes memory allocated
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));//(int*)for typecast
    //in run time 20 bytes memory is allocated
    printf("enter the elements in the memory block:\n");
    printf("enter the values from %u address:\n",ptr);
    for (int i = 0; i < 5; i++)
    {
        printf("enter the value at address %u\n",ptr+i);
        scanf("%d",ptr+i);
    }

    
for(int i=0;i<5;i++)
{
     printf("enter the value at address %u is %d\n",ptr+i,*(ptr+i));
        
}

}