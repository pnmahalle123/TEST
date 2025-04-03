#include <stdio.h>

#define N 3 // Size of square matrices

int main() {
    int matrix1[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[N][N];
    int i, j, k;

    // Multiply the two matrices
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            int sum = 0;
            for (k = 0; k < N; k++) {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            result[i][j] = sum;
        }
    }

    // Print the resulting matrix
    printf("Result Matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
