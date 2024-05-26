#include<stdio.h>
struct book
{
    char name[20];
    int pages;
    float price;

};
void main()
{
    struct book b[10],*bptr;
    bptr=b;
    int n;
    printf("enter the values at locations:\n");
    printf("enter how many book information?\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter book[%d]'s name\n",i);
        scanf("%s",&(bptr+i)->name);
        printf("%d",&(bptr+i)->pages);
        scanf("%d",&(bptr+i)->pages);
        printf("%d",&(bptr+i)->price);
        scanf("%f",&(bptr+i)->price);


    }
    printf("the base address=%u and bptr+1=%u\n",bptr,bptr+1);
printf("|SNO |BOOK\t\t| PAGES |PRICE|\n");
for(int i=0;i<n;i++)
{
    printf("|%d|%s\t|%d|%.2f|\n",i+1,(bptr+i)->name,(bptr+i)->pages,(bptr+i)->price);

}
}