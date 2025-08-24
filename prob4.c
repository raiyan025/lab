// Write a program in C to find the sum of all elements of the array.
// Input :
// Enter the number of elements for your array: 5
// Enter the array elements:
// 100 2 300 1 2
// Output:
// The sum of your array elements is : 405

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
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("The sum of your array elements is :%d", sum);
    return 0;
}