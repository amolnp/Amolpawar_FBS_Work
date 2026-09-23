#include <stdio.h>

void primeNumbers(int arr[], int size)
{
    int i, j, count;

    printf("Prime numbers:\n");

    for(i = 0; i < size; i++)
    {
        count = 0;

        if(arr[i] < 2)
            continue;

        for(j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
                count++;
        }

        if(count == 2)
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

    primeNumbers(arr, 5);
}