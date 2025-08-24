// Write a C program to right rotate an array.

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
    int temp = arr[size-1];
    for (int i = size-1; i>0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    printf("After rotation:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}