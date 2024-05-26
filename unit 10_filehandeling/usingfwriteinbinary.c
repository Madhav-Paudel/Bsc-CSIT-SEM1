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
    fptr=fopen("binaryfile.bin","wb");//write mode
 for (int i = 1; i <=3; i++)
 {
    num.n1=i;
    num.n2=i*5;
    num.n3=i*10+1;
    fwrite(&num,sizeof(struct threenum),1,fptr);
 }
 
}