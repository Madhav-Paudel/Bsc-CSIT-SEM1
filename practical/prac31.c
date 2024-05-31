// Program to display number of days in a month using switch statement.
#include <stdio.h>
int main()
{
    int month;
    printf("enter the month in number(1-12):\n");
    scanf("%d",&month);
    switch ( month )
    {
    case 1:
        printf("there is 31 days in january in 2024");
        break;
    case 2:
        printf("there is 29 days in february in 2024");
        break;
    case 3:
        printf("there is 31 days in march in 2024");
        break;
    case 4:
        printf("there is 30 days in april in 2024");
        break;
        case 5:
        printf("there is 31 days in may in 2024 ");
        break;
        case 6:
        printf("there is 30 days in june in 2024");
        break;
        case 7:
        printf("there is 31 days in july in 2024");
        break;
        case 8:
        printf("there is 31 days in august in 2024");
        break;
        case 9:
        printf("there is 30 days in september in 2024");
        break;
        case 10:
        printf("there is 31 days in october in 2024");
        break;
        case 11:
        printf("there is 30 days in november in 2024");
        break;
        case 12:
        printf("there is 31 days in december in 2024");
        break;
        
        
        default:
        printf("error 404");
            break;
        }
        
        
            }
