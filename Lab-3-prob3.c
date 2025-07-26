/*Write a C program to print a multiplication table of any number.
Input:5
Output:
5x1=5
5X2=10
.
5X10=50*/

#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d\n", n, i, n * i);
    }

    return 0;
}