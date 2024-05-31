#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[25];
    char b[25];
    char c[25];

    int k,l,m;
    printf("enter first word:\n");
    scanf("%s",a);
     
     printf("enter second word:\n");
     scanf("%s",b);

     printf("enter third word:\n");
     scanf("%s",c);

     k=strlen(a);
     l=strlen(b);
     m=strlen(c);
     if (k>l && k>m)
     {
        printf("%s is largest",a);

     }
else if ( l>m && l>k)
{
    printf("%s is largest ",b);

}
else if (k>l && k>m )
{
    printf(" %s is largest ",c);
}
}