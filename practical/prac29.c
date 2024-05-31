/*Given marks in five subjects. Write a program (a) to display “PASS” or “FAIL” if assumed
pass marks is 45 in each subject, (b) to find percentage of marks obtained, and (c) to find
division for “PASS” students assuming that 80% and above for “DISTINCTION”, 60% and
above for “FIRST DIVISION” otherwise “SECOND DIVISION”*/
#include<stdio.h>
int main(){
    int physics,math,dl,cprog,iit;
    float percentage;
    printf("enter your marks in physics:");
    scanf("%d",&physics);
     printf("enter your marks in math:");
    scanf("%d",&math);
     printf("enter your marks in dl:");
    scanf("%d",&dl);
     printf("enter your marks in c programming:");
    scanf("%d",&cprog);
     printf("enter your marks in iit :");
    scanf("%d",&iit);
    percentage=(physics+math+dl+cprog+iit)/5;
    if(physics>=45 && math>=45 && dl>=45 && cprog >=45 && iit >=45)
{
printf("you are pass");
if(percentage>=80)
    {

        printf("you get %f percentage and get distinction  ",percentage);

    }
    else if(percentage>=60)
    {
        printf(" you get %f percentage and get first division ",percentage);
    }
    else if (percentage<60)
    {
       printf(" you get %f percentage and get second division ",percentage); 
    }

}
else {
    printf("you are fail");
}
    

 return 0;   

    
 
}