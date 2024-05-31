#include <stdio.h>
int main()
{
    printf("even number from 1 to 20:\n");
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 != 0)
            continue; //skip like break
        printf("%d\t", i);
    }
}
