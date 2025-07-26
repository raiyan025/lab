/* Write a C program for printing the following pattern :
Input:5
Output:
*
**
***
****
***** */
#include <stdio.h>

int main()
{
    int row, col, n;
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("*"); // for column
        }
        printf("\n"); // for rowspace
    }

    return 0;
}