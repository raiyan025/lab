/* Write a C program for printing the following pattern :
Input:5
Output:
A
BB
CCC
DDDD
EEEEE
DDDD
CCC
BB
A
*/

#include <stdio.h>

int main()
{
    int row, col, n;
    scanf("%d", &n);
    for (row = 0; row < n; row++)
    {
        char ch = 'A' + row;
        for (col = 0; col <= row; col++)
        {
            printf("%c", ch); // for column
        }

        printf("\n"); // for rowspace
    }

    for (row = n - 2; row >= 0; row--)
    {
        char ch = 'A' + row;
        for (col = 0; col <= row; col++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}