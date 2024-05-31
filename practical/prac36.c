/*36. Program that displays the temperatures from 0 degrees Celsius to 100 degrees Celsius and
their Fahrenheit equivalent.*/




#include<stdio.h>

int main() {
    int range_celsius;
    float fahrenheit;

    printf("Enter the range in Celsius: ");
    scanf("%d", &range_celsius);

    printf("Celsius\tFahrenheit\n");
    for(int celsius = 0; celsius <= range_celsius; celsius++) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%d\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}
