#include <stdio.h>
struct time

{
    int hours;
    int minutes;
    int seconds;
};
struct time difference(struct time t1, struct time t2)
{
    int seconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;

    int seconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int totaldifseconds = seconds1 - seconds2;
    struct time temp;
    temp.hours = totaldifseconds / 3600;
    temp.seconds = totaldifseconds % 3600;
    temp.minutes = temp.seconds / 60;
    temp.seconds = temp.seconds % 60;
    return temp;
};
void main()
{
    struct time t1,t2;
    printf("enter time t1 int (hh:mm:ss) formate\n");
    scanf("%d:%d:%d",&t1.hours,&t1.minutes,&t1.seconds);
    printf("enter time t2")
    print("%d:%d:%d",&t2.)
}