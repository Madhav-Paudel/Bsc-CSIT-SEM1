#include<stdio.h>
int main()
{
    int math,physics,chemistry;
    printf("enter marks in math:");
    scanf("%d",&math);
    printf("enter marks in physics:");
    scanf("%d",&physics);
    printf("enter the marks in chemistry:");
    scanf("%d",&chemistry);
    if(math>=60 && physics>=50 && chemistry>=40)
    {
        printf("you are eligible candidate");
    }
    else if(math+physics+chemistry>=200)
    {
       printf("you are eligible candidate"); 
    }
    else
    {
        printf("you are not eligible candidate");
    }
}