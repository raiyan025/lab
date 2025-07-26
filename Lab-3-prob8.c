/*Print the Fibonacci Series up to a certain number.
(The Fibonacci sequence is a sequence where the next term is the sum of the previous two terms. The first two terms of the Fibonacci sequence are 0 and 1.)
Input: 8
Output: 0 1 1 2 3 5 8*/

#include <stdio.h>

int main()
{
    int i, n, f = 0, s = 1, next;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("0");
    }
    else if (n >= 2)
    {
        printf("0 1");
    }

    for (i = 3; i < n; i++)
    {
        next = f + s;
        printf(" %d", next);
        f = s;
        s = next;
    }
    return 0;
}