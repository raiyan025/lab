// Write a program in C to count the total number of duplicate elements in an array.
// Input :
// Enter the number of elements for your array: 5
// Enter the array elements:
// 1 2 3 1 2
// Output:
// total number of duplicate elements : 2

#include <stdio.h>

int main()
{
    int size;
    printf("Enter array size:");
    scanf("%d", &size);
    int arr[size],visited[size];
    printf("Enter the elements of array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (visited[i] == 1)
            continue;

        int isDuplicate = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = 1; // Mark duplicate as visited
                isDuplicate = 1;
            }
        }

        if (isDuplicate)
        {
            count++;
        }
    }
    printf("Total number of duplicate elements : %d\n", count);
    return 0;
}