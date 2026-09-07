#include <stdio.h>

int main()
{
    int n = 145, original, rem, fact, no, sum = 0;

    original = n;

    while(n > 0)
    {
        rem = n % 10;

        fact = 1;

        for(no = 1; no <= rem; no++)
        {
            fact = fact * no;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == original)
    {
        printf("Strong");
    }
    else
    {
        printf("Not Strong");
    }

}