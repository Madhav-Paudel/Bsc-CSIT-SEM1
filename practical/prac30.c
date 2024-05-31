/*Write a program using switch statement to display EXCELLENT, VERY GOOD, GOOD,
SATISFACTORY, or FAIL if the user enters A, B, C, D, or E respectively.*/
#include<stdio.h>
int main()
{
    char choice;
    printf("enter the first letter 'A,B,C....E':\n");
    scanf("%s",&choice);
    switch (choice)
    {
    case 'A':
      printf(" EXCELLENT");
        break;
        case'B':
        printf("VERY GOOD");
        break;
        case'C':
        printf("GOOD");
        break;
        case'D':
        printf("SATISFACTORY");
        break;
        case'E':
        printf("FAIL");
        break;
    
    default:
    printf("error 404");
        break;
    }

}