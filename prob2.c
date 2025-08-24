// Write a program in C to copy the elements of one array into another array.
// Input :
// Enter the number of elements for your array: 5
// Enter the array elements:
// 100 2 300 1 2
// Output:
// The elements in array are as follows:
// 100 2 300 1 2

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the number of elements for your array:");
    scanf("%d", &size);
    int arr1[size];
    int arr2[size + 78]; // size beshi declare kore rakha jay
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("After Copying:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}