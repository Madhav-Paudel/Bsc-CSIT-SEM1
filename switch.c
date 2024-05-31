#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("enter today date ");
scanf("%d",&a);
switch (a)
{
    case 1:
    printf("today is sunday ");
    break;
    case 2:
    printf("today is not your day ");
    break;
    default:
    printf("invalid");
    break;




}
return 0;
}