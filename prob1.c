// Write a program in C to store elements in an array and print it.
// Input :
// Enter the number of elements for your array: 5
// Enter the array elements:
// 100 2 300 1 2
// Output:
// You entered the following array elements:
// 100 2 300 1 2

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the array size:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements:\n");
    for (int i = 0; i <= size - 1; i++)
    {
        scanf("%d", &arr[i]);
        // printf("%d ",arr[i]);
    }
    printf("You entered the following array elements:\n");
    for (int i = 0; i <= size-1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}