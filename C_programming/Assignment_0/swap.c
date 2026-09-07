#include <stdio.h>

void main()
{
    int a = 10;
    int b = 20;
    int swap;

    swap = a;
    a = b;
    b = swap;

    printf("swapping: ");
    printf("a= %d ", a);
    printf("b= %d ", b);
}