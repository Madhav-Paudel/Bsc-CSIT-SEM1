/*Program to find the sum of the series 1 + x2
+ 3x2
+ 4x2
+.....+nx2*/
#include <stdio.h>

int main() {
    int n, i;
    float x, sum = 0.0;

    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i * x * x;
        printf("%d * %.2f^2", i, x);
        if (i < n) {
            printf(" + "); // Print '+' sign between terms
        }
    }

    printf("\nThe sum of the series is: %.2f\n", sum);

    return 0;
}
