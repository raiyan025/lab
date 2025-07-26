/*Print the following series and find the result of the series.
Input: 5
Output: 1+8+27+64+125 = 225*/

#include <stdio.h>

int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        sum=sum+i*i*i;
        printf("%d",i*i*i);
        if (i!=n)
        {
            printf("+");
        }
        
    }
    printf("=%d",sum);//sum variable na nile square((n*(n+1)/2))
    return 0;
}