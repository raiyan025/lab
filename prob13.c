// Write a program in C to find the maximum and minimum element in an array.
// Input :
// Enter the number of elements for your array: 5
// Enter the array elements:
// 100 2 300 1 2
// Output:
// The maximum element is 300.
// The minimum element is 1.

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
    int max = arr[0], min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The maximum element is %d\n", max);
    printf("The minimum element is %d", min);

    return 0;
}