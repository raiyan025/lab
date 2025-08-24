// Write a program in C to read n number of values in an array and display it in reverse order.
// Key Point:
// • 	The array itself remains unchanged in memory
// • 	You're just printing the elements from the last to the first

#include <stdio.h>

int main()
{
    int size;
    printf("How many numbers do you want to store?\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements:\n");
    for (int i = 0; i <= size - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array elements in reverse order:\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}