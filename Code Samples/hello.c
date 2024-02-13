#include <stdio.h>

// Function to add two numbers
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to subtract two numbers
float subtract(float num1, float num2) {
    return num1 - num2;
}

int main() {
    float num1, num2;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform addition and subtraction
    printf("Addition: %.2f\n", add(num1, num2));
    printf("Subtraction: %.2f\n", subtract(num1, num2));

    return 0;
}