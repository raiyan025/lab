/*Write a C program for printing the following pattern :
Input:5
Output:
1
12
123
1234
12345*/

#include <stdio.h>

int main()
{
    int row, col, n;
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= i; col++)
        {
            printf("%d", col);
            // for column
        }
        printf("\n");
        // for rowspace
    }

    return 0;
}