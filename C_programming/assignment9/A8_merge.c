#include <stdio.h>

void merge(int arr[], int brr[], int crr[], int size)
{
    int i;

    for(i = 0; i < size; i++)
        crr[i] = arr[i];

    for(i = 0; i < size; i++)
        crr[i + size] = brr[i];

    printf("Merged array:\n");

    for(i = 0; i < size * 2; i++)
        printf("%d ", crr[i]);
}

int main()
{
    int arr[5], brr[5], crr[10];
    int i;

    printf("Enter first array:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter second array:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &brr[i]);

    merge(arr, brr, crr, 5);
}