/*Program to display first n natural numbers, their sum, and their average using all the three
looping statements.*/
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Using for loop
    printf("Using for loop:\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
        sum += i;
    }
    avg = sum / n;
    printf("Sum = %.2f\nAverage = %.2f\n", sum, avg);
 
    // Using while loop
    printf("Using while loop:\n");
    i = 1;
    sum = 0;
    while (i <= n) {
        printf("%d ", i);
        sum += i;
        i++;
    }
    avg = sum / n;
    printf("Sum = %.2f\nAverage = %.2f\n", sum, avg);

    // Using do-while loop
    printf("Using do-while loop:\n");
    i = 1;
    sum = 0;
    do {
        printf("%d ", i);
        sum += i;
        i++;
    } while (i <= n);
    avg = sum / n;
    printf("Sum = %.2f\nAverage = %.2f\n", sum, avg);

    return 0;
}
