
// to find body mass weight of human body
#include<stdio.h>

int main()
{
    float height,weight,meter;
    printf("enter your height in feet(ft):");
    scanf("%f",&height);
    printf("enter your weight in kg:");
    scanf("%f",&weight);
    meter=height*0.3048;
   float bmi=(weight)/(meter*meter);
   if(bmi<18)
   {
       printf("you are underweight:");
   }
   else if (bmi>=18 && bmi<24.9)
   {
     printf("you are normal"); 
   }
   else if(bmi>=25 && bmi<30)
   {
       printf("you are overweight");
    
   }
   else
   printf("you are obese");
    
}