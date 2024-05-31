#include<stdio.h>
#include<conio.h>
int main ()
{
float a;
printf("enter your percentage:\n");
scanf("%f",&a);



if(a>=90 && a<=100)
{
    printf("conguralation you have secured A by %f:",a);

}
else if (a>=80 && a<=89)
{
    printf("conguralation you have secured B by %f:",a);
}
else if (a>=60 && a<=69)
{
    printf("conguralation you have secured C by  %f:",a);

}
else if (a<60)
{
    printf("you cannot study further sorry ?");
}
return 0;
}