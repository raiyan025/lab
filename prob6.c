// Write a program in C that will reverse an array..
// Input :
// Enter the number of elements for your array: 5
// Enter the array elements:
// 100 2 300 1 2
// Output:
// Your array after reversing:
// 2 1 300 2 100
// Key Point:
// • 	The array is actually changed in memory
// • 	If you print it later or use it again, it will be in reversed form

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the number of elements for your array:");
    scanf("%d", &size);
    int arr[size];
    printf("The array elements are:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    printf("After reversing:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}