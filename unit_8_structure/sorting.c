#include<stdio.h>
struct student

{
    int id;
    char name[20];
    float fee;

}st[50];
void main()
{
    int i,n;
    printf("how many students?\n");
    scanf("%d",&n);
    printf("enter %d students\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter id of %d.student\n");
scanf("%d",&st[i].id);
printf("enter name of %d.student",i);
scanf("%s",&st[i].name);
printf("enter fee of %d.student\n",i);
scanf("%f",&st[i].fee);

    }
    printf("student before sorting:\n");
    printf("id\tname\tfee\n");//formate
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%.2f\n",st[i].id,st[i].name,st[i].fee);
    }
    for (int i = 0; i < n-1; i++)
    {
        for(int j=0;j<n;j++)
        {
            if(st[i].id>st[j].id)
            {
                struct student temp;
                temp=st[i];
                st[i]=st[j];
                st[j]=temp;
            }
        }
    }
    

}
