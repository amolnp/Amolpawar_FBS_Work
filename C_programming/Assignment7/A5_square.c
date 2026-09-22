#include <stdio.h>

void square(int *n)
{
    printf("Square = %d", (*n) * (*n));
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    square(&n);
}