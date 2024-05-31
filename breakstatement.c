#include <stdio.h>

int main() {
    int i;

    for(i = 0; i < 60; i++) {
        printf("%d\n", i);
        if (i == 24) {
            break;
        }
    }

    return 0; 
}
