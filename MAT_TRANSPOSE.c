#include<stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int transpose[3][3];

    // Transposing the matrix
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            transpose[j][i] = matrix[i][j]; // Swapping rows with columns
        }
    }

    // Printing the transposed matrix
    printf("Transposed Matrix:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
