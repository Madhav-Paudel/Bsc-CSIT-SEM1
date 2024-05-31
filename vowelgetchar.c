#include <stdio.h>

int main()
{
    char n;
    printf("enter any character:\n");
    n = getchar();
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
    {
        printf("you enter vowel letter is %c ", n);
    }
    else
    {
        printf("you enter consonant letter is %c", n);
    }
    return 0;
}