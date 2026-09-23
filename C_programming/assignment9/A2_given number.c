#include <stdio.h>

void search(int arr[], int size, int num)
{
    int i, found = 0;

    for(i = 0; i < size; i++)
    {
        if(arr[i] == num)
        {
            printf("Number found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Number not found");
}

int main()
{
    int arr[5];
    int i, num;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &num);

    search(arr, 5, num);

}