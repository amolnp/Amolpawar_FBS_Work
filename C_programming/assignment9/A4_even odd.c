#include <stdio.h>

void oddEven(int arr[], int size)
{
    int i;

    printf("Even numbers:\n");

    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\nOdd numbers:\n");

    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0)
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

    oddEven(arr, 5);
}