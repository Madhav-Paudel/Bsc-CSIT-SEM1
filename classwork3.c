#include<stdio.h>
int main()
{
    char n;
    printf("enter any word:");
    scanf("%c",&n);
    switch (n)
    {
    case 'a':
     printf("excellent");
        break;
    case 'b':
     printf("very good");
        break;
    case 'c':
        break;
    case 'd':
        printf("good");
        break;
    case 'e':
        printf("not bad");
    default:
     printf("invald");
        break;
    }
}