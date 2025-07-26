/*Check whether the given number is prime or not.
Input: 20
Output: 20 is not a prime number.
#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    if (n > 1)
    {
        for (i = 2; i < n / 2; i++) // more accurate sqrt(n) have to add math.h.Any non-prime number has at least one factor ≤ n/2, unless it’s the number itself.

        {
            if (n % i == 0)
            {
                printf("%d is not a prime number", n);
                return 0;
            }
        }
    }
    // If loop finished without break, i becomes greater than n/2
    if (i > n / 2 && n > 0)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}*/

/*Even n / 2 is not optimal. The most efficient basic method checks up to √n, because:
If n = a × b, then one of a or b must be ≤ √n
So, no point checking beyond sqrt(n).

Example: Is 29 prime?
√29 ≈ 5.38, so you only check 2, 3, 4, 5
No need to go up to 14 (29 / 2)*/

#include <stdio.h>

int main()
{
    int i, n, isprime = 1;
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("%d is not a prime number", n);
        return 0;
    }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 1)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }

    return 0;
}
