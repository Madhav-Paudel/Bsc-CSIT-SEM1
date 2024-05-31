//Program to calculate sum of first 10 even number.
#include<stdio.h>

int main() {
    int i, sum = 0;
    for (i = 2; i <= 20; i += 2) {
        sum += i;
    }
    printf("The sum of the first 10 even numbers is %d\n", sum);
    return 0;
}
