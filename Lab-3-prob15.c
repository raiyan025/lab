/*Write a C program for printing the following pattern :
Input:5
Output:
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/

#include <stdio.h>

int main()
{
    int row, col, n;
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            printf(" ");
        }

        for (col = 1; col <= 2 * row - 1; col++) // odd pattern (2n-1)
        {
            printf("*"); // for column
        }
        printf("\n"); // for rowspace
    }
    for (row = n-1; row >=1; row--)
    {
        for (int space =row; space <= n - 1; space++)
        {
            printf(" ");
        }
        for (col = 1; col <= 2*row-1 ; col++) // odd pattern (2n-1)
        {
            printf("*"); // for column
        }
        printf("\n"); // for rowspace
    }

    return 0;
}