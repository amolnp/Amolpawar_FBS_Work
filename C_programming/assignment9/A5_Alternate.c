#include <stdio.h>

void alternate(int arr[], int size)
{
    int i;

    printf("Alternate elements:\n");

    for(i = 0; i < size; i = i + 2)
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

    alternate(arr, 5);
}