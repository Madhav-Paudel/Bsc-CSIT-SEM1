#include<stdio.h>
int main()
{
    int day,month,year;
    printf("enter your date of birth in (dd-mm-yy)format in BS:\n");
    scanf("%d %d %d",&day,&month,&year);
    if(day)

    printf("your dob is %d/%d/%d",day,month,year);
    return 0;
}