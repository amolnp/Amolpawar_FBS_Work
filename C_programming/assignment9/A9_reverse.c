#include <stdio.h>

void reverse(int arr[], int size)
{
    int i;

    printf("Reverse array:\n");

    for(i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[5];
    int i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    reverse(arr, 5);
}