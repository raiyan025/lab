// Write a program in C to print all unique elements in an array.
// Input :
// Enter the number of elements for your array: 5
// Enter the array elements:
// 1 2 3 1 4
// Output:
// Unique elements : 2 3 4

#include <stdio.h>

int main() {
    int size;
    printf("Enter the number of elements for your array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements : ");
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 1)
            printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}