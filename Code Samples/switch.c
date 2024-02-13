#include <stdio.h>

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("Passing grade\n");
            break;
        case 'D':
            printf("Barely passing\n");
            break;
        case 'F':
            printf("Failed\n");
            break;
        default:
            printf("Invalid grade\n");
    }

    return 0;
}
