// Write a C program to left rotate an array.

#include <stdio.h>

int main()
{

    int size;
    printf("Enter array size:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp = arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
    printf("After rotation:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}