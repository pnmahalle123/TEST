#include <stdio.h>

int main() {
    int n;

    // Get user input
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // Inner loop for spaces
        for (int j = i; j < n; j++) {
            printf(" "); // Print space for centering
        }
        // Inner loop for printing numbers
        for (int k = 1; k <= i; k++) {
            printf("%d ", k); // Print numbers from 1 to i
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
