// Write a program in C to insert a new value at a particular position of an array.

#include <stdio.h>

int main()
{
    int size, position, value;
    printf("Enter array size:");
    scanf("%d", &size);
    int arr[size + 1];
    printf("Enter the elements of array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter position(0 to %d):",size);
    scanf("%d", &position);
    if (position<0 || position>size)
    {
       printf("Invalid position");
       return 0;
    }
    
    printf("Enter the value you want to add:");
        scanf("%d", &value);
    for (int i = size; i >=position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
    printf("After inserting new value:\n");
    for (int i = 0; i <size+1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}