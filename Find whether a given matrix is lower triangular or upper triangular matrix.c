#include <stdio.h>

// Function to check if a matrix is lower triangular
int isLowerTriangular(int matrix[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (matrix[i][j] != 0) {
                return 0; // If any element above the main diagonal is non-zero, it's not a lower triangular matrix
            }
        }
    }
    return 1; // If all elements above the main diagonal are zero, it's a lower triangular matrix
}

// Function to check if a matrix is upper triangular
int isUpperTriangular(int matrix[][3], int size) {
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                return 0; // If any element below the main diagonal is non-zero, it's not an upper triangular matrix
            }
        }
    }
    return 1; // If all elements below the main diagonal are zero, it's an upper triangular matrix
}
int main() {
    int matrix[3][3] = { {1, 0, 0},
                         {4, 5, 0},
                         {7, 8, 9} };
    int size = 3;
    printf("Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    if (isLowerTriangular(matrix, size)) {
        printf("The given matrix is a lower triangular matrix.\n");
    } else {
        printf("The given matrix is not a lower triangular matrix.\n");
    }
    if (isUpperTriangular(matrix, size)) {
        printf("The given matrix is an upper triangular matrix.\n");
    } else {
        printf("The given matrix is not an upper triangular matrix.\n");
    }
    return 0;
}
