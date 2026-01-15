#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }

    printf("Sum of all elements stored in the array is: %d\n", sum);
    return 0;
}
