#include <stdio.h>

void sumArray(int arr[], int size)
{
    int i, sum = 0;

    for(i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum = %d", sum);
}

int main()
{
    int arr[5];
    int i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    sumArray(arr, 5);
}