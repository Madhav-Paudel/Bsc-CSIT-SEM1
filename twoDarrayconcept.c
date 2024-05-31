#include<stdio.h>
int main()
{
    int matrix[2][3];//two rows and three columns
    int i,j;
    for(i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("enter matrix[%d][%d]=",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nThe values in matrix are:\n");
     for(i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",matrix[i][j]);
        }
        printf("\n");
    }

}
