// pallindrome array check means after reversal array will be same
/*Logic
1.copy to another array
2.reverse
3.compare with previous array*/
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter array size:");
    scanf("%d", &n);
    int arr[n];
    int arr1[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements of array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // Copy
    for (i = 0; i < n; i++)
    {
        arr1[i] = arr[i];
    }
    // reverse
    for (i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("\nAfter reversing: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // pallindrome
    int flag = 1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != arr1[i])
        {
            printf("\nNot pallindrome.");
            flag = 0;
            break;
        }
    }
    if (flag = 1)
    {
        printf("\nPallindrome.");
    }
    return 0;
}