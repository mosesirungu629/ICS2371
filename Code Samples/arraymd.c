#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Accessing elements row-wise
    printf("Row-wise access:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Accessing elements column-wise
    printf("\nColumn-wise access:\n");
    for (int j = 0; j < COLS; j++) {
        for (int i = 0; i < ROWS; i++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
