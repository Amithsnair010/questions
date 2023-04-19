#include <stdio.h>

void multiplyMatrices(int mat1[][3], int rows1, int cols1,
                      int mat2[][2], int rows2, int cols2,
                      int result[][2]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[2][3] = { {1, 2, 3},{4, 5, 6} };
    int rows1 = 2;
    int cols1 = 3;
    int mat2[3][2] = {{7, 8},{9, 10},{11, 12}};
    int rows2 = 3;
    int cols2 = 2;
    int result[2][2];
    printf("Matrix 1:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix 2:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    multiplyMatrices(mat1, rows1, cols1, mat2, rows2, cols2, result);
    printf("\nMatrix Multiplication Result:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
