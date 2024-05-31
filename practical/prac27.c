//27. Program to find the roots of a quadratic equation using discriminant.
#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c;
    float d, firstroot, secondroot;

    printf("Enter the coefficient of x^2 from the equation ax^2 + bx + c: ");
    scanf("%d", &a);
    printf("Enter the coefficient of x from the equation ax^2 + bx + c: ");
    scanf("%d", &b);
    printf("Enter the value of c from the equation ax^2 + bx + c: ");
    scanf("%d", &c);

    d = b * b - 4 * a * c;

    if (d < 0) {
       
      
        float i = sqrt(-1); 
        firstroot = -b / (2.0 * a);
        secondroot = i * sqrt(-d) / (2.0 * a);
        printf("Roots are: %.2f + %.2fi and %.2f - %.2fi\n", firstroot, secondroot, firstroot, secondroot);
    } else if (d == 0) {  
       
     
        firstroot = -b / (2.0 * a);
        printf("Root is: %.2f\n", firstroot);
    } else {
   
        
        firstroot = (-b + sqrt(d)) / (2.0 * a);
        secondroot = (-b - sqrt(d)) / (2.0 * a);
        printf("Roots are: %.2f and %.2f\n", firstroot, secondroot);
    }

    return 0;
}
