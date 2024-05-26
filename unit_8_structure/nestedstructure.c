// structre inside struct nestedstructure

#include<stdio.h>
struct date
{
int day;
int month;
int year;
};
struct person
{
  char name[20];
  int id;
  struct date birth,death;  
};
struct student
{
    char name[20];
    struct date admissiondate;

};
void main (){
    struct student st;
    printf("enter the information of student:\n");
    scanf("%s %d %d %d",&st.name,&st.admissiondate.day,&st.admissiondate.month,&st.admissiondate.year);
    printf("the enter data are as following\n");
    printf("Name=%s\nDate of admission=%d-%d-%d",st.name,st.admissiondate.year,st.admissiondate.month,st.admissiondate.day);
}


