#include<stdio.h>
#include<string.h>
struct student
{
    int studentid;
    char name[20];
    float fee;
};
int main()
{
    struct student data[50];
    int n;
    printf("how many student you want to enter\n");
    scanf("%d",&n);
    printf("enter the data of %d student in the given formate\n",n);
    for(int i=1;i<=n;i++)
    {
printf("enter the student id of %d\n",i);
scanf("%d",&data[i].studentid);
printf("enter the name of student %d\n",i);
scanf("%s",&data[i].name);
printf("enter the fee of student %d\n",i);
scanf("%f",&data[i].fee);
    }
    printf("before sorting\n");//for displaying the entered data 
    for(int i=1;i<=n;i++)
    {
    printf(" student id:%d\n student name:%s\n fee:%f\n ",data[i].studentid,data[i].name,data[i].fee);
    }
       for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i + 1; j <=n; j++)
        {
            // if (st[i].id > st[j].id)//for int
            if (strcmp(data[i].name, data[j].name) > 0)//this part is arranging the name
            {
                struct student temp;
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
    printf("after sorting");//for the displaying the enter data
    for(int i=1;i<=n;i++)
    {
        printf("the id is %d\n",data[i].studentid);
        printf("the student name is %s\n",data[i].name);
        printf("the fee of student is %f\n",data[i].fee);
        
    }
    
    
}