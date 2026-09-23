#include <stdio.h>

int main()
{
    int arr[5], brr[5], crr[10];
    int i;

    printf("Enter 5 elements of first array:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter 5 elements of second array:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &brr[i]);

    for(i = 0; i < 5; i++)
        crr[i] = arr[i];

    for(i = 0; i < 5; i++)
        crr[i + 5] = brr[i];

    printf("Merged array:\n");

    for(i = 0; i < 10; i++)
        printf("%d ", crr[i]);
}