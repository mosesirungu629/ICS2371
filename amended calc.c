//ENE212-0164/2021 MOSES IRUNGU
#include <stdio.h>

float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

int main() {
    float num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    float result_add = add(num1, num2);
    printf("The result of %.2d + %.2d is %.2d\n", num1, num2, result_add);

    float result_subtract = subtract(num1, num2);
    printf("The result of %.2d - %.2d is %.2d\n", num1, num2, result_subtract);

    return 0;
}
