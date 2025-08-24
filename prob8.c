// Write a program in C to insert a new value at the end of an array.

#include <stdio.h>

int main()
{
    int size, n;
    printf("Enter the array size:");
    scanf("%d", &size);
    int arr[size + 1];
    printf("Enter the array elements:\n");
    for (int i = 0; i <= size - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value you want to add at the end of the array:");
    scanf("%d", &n);
    arr[size] = n;
    printf("After Insertion:\n");
    for (int i = 0; i < size + 1; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}