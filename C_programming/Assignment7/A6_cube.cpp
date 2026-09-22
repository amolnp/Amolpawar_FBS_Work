#include <stdio.h>

void cube(int *n)
{
    printf("Cube = %d", (*n) * (*n) * (*n));
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    cube(&n);
}