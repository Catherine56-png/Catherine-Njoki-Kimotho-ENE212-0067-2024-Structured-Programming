#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5

int main() {
    int buffer[BUFFER_SIZE];
    int count = 0;      // how many values stored so far
    int index = 0;      // write position

    int value;
    char choice;

    do {
        printf("Enter value: ");
        scanf("%d", &value);

        buffer[index] = value;
        index = (index + 1) % BUFFER_SIZE;

        if (count < BUFFER_SIZE)
            count++;

        printf("Add more? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    // Print stored values from oldest -> newest
    printf("\nOn print: ");
    int start = (index % BUFFER_SIZE);

    for (int i = 0; i < count; i++) {
        int pos = (start + i) % BUFFER_SIZE;
        printf("%d ", buffer[pos]);
    }
    printf("\n");

    return 0;
}





