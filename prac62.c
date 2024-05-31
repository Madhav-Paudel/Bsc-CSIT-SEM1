// 62. Write macros to compute area and circumference of circle and make a program to use this
// macro.
#include <stdio.h>

#define PI 3.14159265359
#define AREA(radius) (PI * (radius) * (radius))
#define CIRCUMFERENCE(radius) (2 * PI * (radius))

int main() {
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference using macros
    float area = AREA(radius);
    float circumference = CIRCUMFERENCE(radius);

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
