#include <stdio.h>

int main()
{
    int num = 28, i, sum = 0;

    for(num = 1; num < num; num++)
    {
        if(num % num == 0)
        {
            sum = sum + num;
        }
    }

    if(sum == num)
    {
        printf("Perfect");
    }
    else
    {
        printf("Not Perfect");
    }

}