#include <stdio.h>

void findIntersection(int *arr1, int size1, int *arr2, int size2) {
    int i = 0, j = 0;

    printf("Intersection: ");
    while (i < size1 && j < size2) {
        if (*(arr1 + i) < *(arr2 + j)) {
            i++;
        } else if (*(arr1 + i) > *(arr2 + j)) {
            j++;
        } else {
            printf("%d ", *(arr1 + i));
            i++;
            j++;
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    findIntersection(arr1, 5, arr2, 4);
    return 0;
}
