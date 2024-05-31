#include <stdio.h>
#include<conio.h>
void main()
{

    int num, counter;
    char choice = 'y';
    while (choice == 'y')
    {
        double fact = 1;

        printf("enter any number:\n");
        scanf("%d", &num);
        for (counter = 1; counter <= num; counter++)
        {
            fact = fact * counter;
        }
        printf("factorial=%lf", fact);
        printf("enter y to continue and else to exit\n");
        choice=getche();
    }
}