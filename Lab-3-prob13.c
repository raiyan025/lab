/* Write a C program for printing the following pattern :
Input:5
*
***
*****
*******
********* */

#include <stdio.h>

int main()
{
    int row, col, n;
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= 2 * row - 1; col++)//odd pattern (2n-1)
        {
            printf("*"); // for column
        }
        printf("\n"); // for rowspace
    }

    return 0;
}