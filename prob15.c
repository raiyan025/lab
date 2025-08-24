// Write a program in C to count the frequency of each element of an array.
// Input :
// Enter the number of elements for your array: 5
// Enter the array elements:
// 99 2 99 1 2
// Output:
// The frequency of 99 is 2.
// The frequency of 2 is 2.
// The frequency of 1 is 1

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the number of elements for your array: ");
    scanf("%d", &size);

    int arr[size], visited[size];
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize visited array
    }

    for (int i = 0; i < size; i++)
    {
        if (visited[i] == 1)
            continue;

        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1; // Mark as counted
            }
        }

        printf("The frequency of %d is %d.\n", arr[i], count);
    }

    return 0;
}