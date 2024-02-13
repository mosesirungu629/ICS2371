#include <stdio.h>
#include <stdbool.h> // Include for the bool data type

int main() {
    // Integer types
    int num1 = 10;
    char letter = 'A';
    short smallNum = 5;
    long bigNum = 1000000;
    long long veryBigNum = 123456789012345;

    // Floating-point types
    float pi = 3.14;
    double e = 2.71828;
    long double goldenRatio = 1.61803398875;

    // Boolean type
    bool isTrue = true;
    bool isFalse = false;

    // Arithmetic operations
    int sum = num1 + smallNum;
    int difference = bigNum - num1;
    int product = smallNum * 2;
    float division = pi / 2;
    int remainder = 10 % 3;

    // Relational operators
    bool isEqual = (num1 == smallNum);
    bool isGreaterThan = (bigNum > veryBigNum);
    bool isLessThanOrEqual = (letter <= 'B');

    // Logical operators
    bool logicalAnd = (isTrue && isFalse);
    bool logicalOr = (isTrue || isFalse);
    bool logicalNot = !isTrue;

    // Bitwise operators
    int bitwiseAnd = num1 & smallNum;
    int bitwiseOr = num1 | smallNum;
    int bitwiseXor = num1 ^ smallNum;
    int bitwiseNot = ~num1;
    int leftShift = num1 << 2;
    int rightShift = num1 >> 2;

    // Printing the results
    printf("sum: %d\n", sum);
    printf("difference: %d\n", difference);
    printf("product: %d\n", product);
    printf("division: %f\n", division);
    printf("remainder: %d\n", remainder);
    printf("isEqual: %d\n", isEqual);
    printf("isGreaterThan: %d\n", isGreaterThan);
    printf("isLessThanOrEqual: %d\n", isLessThanOrEqual);
    printf("logicalAnd: %d\n", logicalAnd);
    printf("logicalOr: %d\n", logicalOr);
    printf("logicalNot: %d\n", logicalNot);
    printf("bitwiseAnd: %d\n", bitwiseAnd);
    printf("bitwiseOr: %d\n", bitwiseOr);
    printf("bitwiseXor: %d\n", bitwiseXor);
    printf("bitwiseNot: %d\n", bitwiseNot);
    printf("leftShift: %d\n", leftShift);
    printf("rightShift: %d\n", rightShift);

    return 0;
}
