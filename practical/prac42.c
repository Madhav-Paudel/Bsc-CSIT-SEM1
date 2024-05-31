// program to display sum of the following series up to n terms.
// Sum = x - x
// 2
// + x3
// - x4+.......
#include<stdio.h>
#include<math.h>

int  main()
{
    int n;
    float x,sum=0.0;
    printf("Enter the number of n: ");
    scanf("%d",&n);
    printf("Enter the number of x: ");
    scanf("%f",&x);
    for (int i = 1; i <=n; i++)
    {
        if (i%2 == 0)
        {
            sum -= pow(x,i);
        }
        else
        {
            sum+= pow(x,i);
        }
        
    }
    printf("Sum = %f",sum);
    
}