/*Write a C program for printing the following pattern :
Input:5
Output:
1
22
333
4444
55555*/

#include <stdio.h>

int main()
{
    int row, col, n;
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d", row);
            // for column
        }
        printf("\n");
        // for rowspace
    }

    return 0;
}