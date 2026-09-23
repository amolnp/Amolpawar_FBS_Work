#include <stdio.h>

void minMax(int arr[], int size)
{
    int i, min, max;

    min = arr[0];
    max = arr[0];

    for(i = 1; i < size; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d", max);
}

int main()
{
    int arr[5];
    int i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    minMax(arr, 5);

}