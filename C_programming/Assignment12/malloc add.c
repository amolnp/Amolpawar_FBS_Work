#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int size, i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter %d elements:\n", size);

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");

    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
}