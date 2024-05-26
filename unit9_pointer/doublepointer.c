#include<stdio.h>
void main()
{  
    int val=100;
    int *ptr;//realloc,malloc,colloc
    ptr=&val;
    int **qtr;
    qtr=&ptr;
    printf("address of ptr=%d\n",val); 
    printf("the value is %d at address %u\n",*ptr,ptr);
    printf("the value is %d at address %u",**qtr,*qtr);//here if we put %x then it display output the value in hexadecimal 

}