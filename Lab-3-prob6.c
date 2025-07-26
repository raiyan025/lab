#include <stdio.h>

int main()
{

    int i, n, sum = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        if (i == 1)
        {
            printf("%d+", i);
            continue;
        }
        sum = sum + i * 2 * i * 3 * i;
        printf("%d*%d*%d", i, 2 * i, 3 * i);
        if (i != n)
        {
            printf("+");
        }
    }
    printf("=%d", sum);
    return 0;
}