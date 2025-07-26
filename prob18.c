/*/*Write a C program for printing the following pattern :
Input: 5
Output:
123456789
 1234567
  89123
  456
   7  */
#include <stdio.h>

int main()
{
    int i, n, j, k;
    printf("Enter N=");
    scanf("%d", &n);
    int num=1;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        for(j=i;j<=2*n-i;j++)
        {

            printf("%d",num);
            num++;

            if(num>9)
            {
                num=1;
            }
        }
        printf("\n");
    }

    return 0;
}