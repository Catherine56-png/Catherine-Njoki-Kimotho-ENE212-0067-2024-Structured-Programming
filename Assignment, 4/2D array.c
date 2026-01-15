#include <stdio.h>
#include <stdlib.h>
int main() {
    // Create and initialize a 6x6 2D array
    int arr[6][6] = {
        {1,  2,  3,  4,  5,  6},
        {7,  8,  9,  10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}
    };

    // Traverse and print all elements
    printf("Array elements:\n");

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); // move to next row
    }

    return 0;
}
