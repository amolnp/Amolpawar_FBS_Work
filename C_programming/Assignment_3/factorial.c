#include <stdio.h>

int main()
{
    int n = 5, no, fact = 1;

    for(no = 1; no <= n; no++)
    {
        fact = fact * no;
    }

    printf("Factorial = %d", fact);

}