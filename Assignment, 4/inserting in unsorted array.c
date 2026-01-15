#include <stdio.h>
#include <stdlib.h>


int main() {
    int n, value, pos;
    printf("Input the size of array: ");
    scanf("%d", &n);

    int arr[n + 1]; // +1 for the new element

    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    printf("Input the position where the value to be inserted: ");
    scanf("%d", &pos);

    printf("The current list of the array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // shift elements to the right
    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = value; // insert at position (1-based)

    printf("\nAfter Insert the element the new list is: ");
    for (int i = 0; i <= n; i++)
        printf("%d ", arr[i]);

    return 0;
}
