#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fptr; // holds the base address of buffer array  of a file contents
    char ch;
    fptr = fopen("test.txt", "r"); // read mode
    if (fptr != NULL)
    {
        printf("file opened successfully\n");
        do
        {
            ch = getc(fptr);
            putchar(ch);
        } while (ch != EOF); //end of file
    }
    else
    {
        printf("error while file opened successfully\n");
        exit(1);
    }
    fclose(fptr);
}