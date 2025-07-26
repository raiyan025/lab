/*Write a C program for printing the following pattern :
Input:5
Output:
1
2 3 2
3 4 5 4 3
4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5*/

#include <stdio.h>

int main()
{
    int row, col, n, space;
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (space = 1; space <= n - row; space++)
        {
            printf("  "); // double
        }
        int num =row;
        for (col = 1; col <= row; col++)
        {
            printf("%d", num++);
        }
        num = num - 2;
        for (col = 1; col < row; col++)
        {
            printf("%d", num--);
        }
        printf("\n");
    }
    return 0;
}








#include<stdio.h>
int main()
{
    int n,i,j,k,l,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n-1;j++)
        {
            printf(" ");
        }
        s=i;
        for(k=1;k<=i;k++)
        {
            printf("%d",s++);
        }
        s=2*i-2;
        for(l=1;l<=i-1;l++)
        {
            printf("%d",s--);
        }
        printf("\n");
    }
}