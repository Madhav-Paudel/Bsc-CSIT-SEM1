#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("pan.txt","w+");
    fputs("This is vedas collage ",fp);
    fseek(fp,8,SEEK_SET);
    //sets current position to the last index
    fputs("C programming language",fp);
    rewind(fp); //moves the cursor to the begins
    printf("%d\n",ftell(fp));
    char text[50];
    printf("%s\n",fgets(text,50,fp));
    fclose(fp);
}