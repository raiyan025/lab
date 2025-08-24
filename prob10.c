// Write a program in C to delete an element at the desired position from an array.

#include <stdio.h>

int main(){
    int size;
    printf("Enter array size:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int index;
    printf("Enter index(0 to %d) where you want to remove the element:\n",size-1);
    scanf("%d",&index);
    if (index<0 || index>=size)
    {
       printf("Invalid index");
       return 0;
    }
    for (int i = index; i <size -1; i++)
    {
       arr[i]=arr[i+1];
    }
     printf("After deleting:\n");
    for (int i = 0; i < size-1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}