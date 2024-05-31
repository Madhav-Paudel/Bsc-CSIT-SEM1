/*20. Admission to a professional course is subject to the following conditions:
a)Marks in mathematics >= 60
b)Marks in physics >= 50
c)Marks in chemistry >= 40
d)Total in all three subjects >= 200
OR
Total in mathematics and physics >=150
Write a program to process the applications to list eligible candidate.*/

#include <stdio.h>
int main()
{
    int m, p, c;
    printf("enter your marks in physics:");
    scanf("%d", &p);
    printf("enter your marks in math:");
    scanf("%d", &m);
    printf("enter your marks in chemistry:");
    scanf("%d", &c);
    if (m >= 60 && p >= 50 && c >= 40)
    {
        printf("you are eligible candidate");
    }
    else if (m + p + c >= 200)
    {
        printf("you are eligible candidate");
    }
    else
    {
        printf("you are not eligible candidate");
    }
}