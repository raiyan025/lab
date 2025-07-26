/*Write a C program that will print the sum of the following series.
1+3+...+(2n+1)
Input 5:
Output: 1+3+5+7+9+11 = 36*/

#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= 2 * n + 1; i += 2)
    {

        sum = sum + i;
        printf("%d", i);
        if (i != 2 * n + 1)
        {
            printf("+");
        }
    }
    printf("=%d", sum);
    return 0;
}