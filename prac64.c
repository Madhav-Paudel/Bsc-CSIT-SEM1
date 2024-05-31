// Program to count number of times a function executes using static local variable.
#include <stdio.h>

void function() {
    // Define a static local variable to count the number of times function is called
    static int count = 0;
    count++; // Increment the count each time the function is called
    printf("Function has been called %d times\n", count);
}

int main() {
    // Call function multiple times
    function();
    function();
    function();
    function();

    return 0;
}
