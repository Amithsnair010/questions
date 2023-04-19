#include <stdio.h>
void transposeMatrix(int matrix[][3], int rows, int cols) {
    int temp;
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            // Swap elements at (i, j) and (j, i)
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}
int main() {
    int matrix[3][3] = { {1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9} };
    int rows = 3;
    int cols = 3;
    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    transposeMatrix(matrix, rows, cols);
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
