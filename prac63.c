// Write a program to calculate area and perimeter of a rectangle using macros.
#include <stdio.h>

#define AREA(length, width) ((length) * (width))
#define PERIMETER(length, width) (2 * ((length) + (width)))

int main() {
    float length, width;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area and perimeter using macros
    float area = AREA(length, width);
    float perimeter = PERIMETER(length, width);

    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}
