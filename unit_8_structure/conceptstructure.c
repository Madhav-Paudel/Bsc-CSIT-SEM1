
#include <stdio.h>

struct student{
    char name[10];
    int rollno;
    float marks;
}s1;

void main()
{
   // struct student s={"madhav",12,16.12};
    //s1=s;
   // int name,rollno,marks;
   printf("enter student name\n");
   scanf("%s",&s1.name);
   printf("enter roll no\n");
   scanf("%d",&s1.rollno);
   printf("enter marks\n");
   scanf("%f",&s1.marks);
     printf("name is %s\n",s1.name);
     printf("rollno %d\n",s1.rollno);
    printf("marks %f\n",s1.marks);
  
}