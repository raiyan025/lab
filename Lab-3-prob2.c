/*Write a C program to print all natural numbers in reverse (from n to 1). - using a while loop.
Input:
5
Output:
5 4 3 2 1*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n > 0)
    {
        printf("%d ", n);
        n--;
    }
    return 0;
}