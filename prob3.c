// Write a C program to put even and odd elements of an array in two separate arrays and count how many even and odd elements are there.
//think how to stop repetetion
#include <stdio.h>

int main()
{
    int size, size1;
    printf("Enter the number of elements for your array:");
    scanf("%d", &size);
    int arr[size];
    int even[size];
    int odd[size];
    int e = 0, o = 0;
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("You entered the following array elements:\n");
    for (int i = 0; i <= size - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[e++] = arr[i]; // increment after assign
        }

        else
        {
            odd[o++] = arr[i]; // increment after assign
        }
    }
    printf("\nEven elements:\n");
    for (int i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\nTotal number of even elements:%d",e);
    printf("\nOdd elements:\n");
    for (int i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\nTotal number of even elements:%d",o);

    return 0;
}