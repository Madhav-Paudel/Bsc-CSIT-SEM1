#include<stdio.h>

int main()
{
    int day,month,year;
    printf("enter day:month:year");
    scanf("%d %d %d",&day,&month,&year);
    day=day+15;
    if(day>31){
        
        day=day-31;
        month=month+1;
    }
    month=month+8;
    if(month>12)
    {
        month=month-12;
        year=+56;
    }
    year=year+56;
    printf("date in AD=%d-%d-%d",day,month,year);
    return 0;
     }