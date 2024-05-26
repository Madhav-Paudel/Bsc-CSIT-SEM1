#include<stdio.h>
#include<stdlib.h>
struct threenum

{
    int n1,n2,n3;
};

int main() 
{
    struct threenum num;
    
    FILE *fptr;//holds the base address of buffer array of a file contents
    fptr=fopen("binaryfile.bin","rb");//write mode
 for (int i = 1; i <=3; i++)
 {
    
    fread(&num,sizeof(struct threenum),1,fptr);
    printf("n1:%d\tn2:%d\tn3:%d\n",num.n1,num.n2,num.n3);
 }

}