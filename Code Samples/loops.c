#include <stdio.h>

int main() {
    // Example of a while loop
    int i = 0;
    while (i < 5) {
        printf("While loop: %d\n", i);
        i++;
    }

    // Example of a do-while loop
    i = 0;
    do {
        printf("Do-while loop: %d\n", i);
        i++;
    } while (i < 5);

    // Example of a for loop
    for (int j = 0; j < 5; j++) {
        printf("For loop: %d\n", j);
    }

    return 0;
}
