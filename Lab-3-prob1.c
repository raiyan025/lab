/*Write a C program to print all odd numbers between 1 to n.
Input :10
Output: 1,3,5,7,9*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (i % 2)
        {
            printf("%d", i);
        }
        if (i % 2 != 0)
        {
            continue;
        }

        printf(",");
    }
    return 0;
}