// Write a program in C to find a value in the array.

#include <stdio.h>

int main()
{
    int size, target;
    printf("Enter the array size:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements:\n");
    for (int i = 0; i <= size - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value you want to find:");
    scanf("%d", &target);
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            found = 1;
            printf("Found at index %d\n",i);
        }
    }
    if (found == 0)
    {
        printf("The value is not found in the array");
    }

    return 0;
}