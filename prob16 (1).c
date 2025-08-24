//Write a program in C to find the number occurring the odd number of times in an array.

#include <stdio.h>

int main() {
    int size;
    printf("Enter the number of elements for your array: ");
    scanf("%d", &size);

    int arr[size], visited[size];
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize visited array
    }

    printf("Numbers occurring odd number of times:\n");
    for (int i = 0; i < size; i++) {
        if (visited[i] == 1)
            continue;

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark as counted
            }
        }

        if (count % 2 != 0) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}