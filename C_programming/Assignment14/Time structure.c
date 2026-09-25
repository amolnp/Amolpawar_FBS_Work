#include <stdio.h>

struct Time
{
    int hrs;
    int min;
    int sec;
};

int main()
{
    struct Time t1, t2, result;
    int totalSec;

    printf("Enter first time (hrs min sec): ");
    scanf("%d %d %d", &t1.hrs, &t1.min, &t1.sec);

    printf("Enter second time (hrs min sec): ");
    scanf("%d %d %d", &t2.hrs, &t2.min, &t2.sec);

    result.sec = t1.sec + t2.sec;
    result.min = t1.min + t2.min;
    result.hrs = t1.hrs + t2.hrs;

    if(result.sec >= 60)
    {
        result.sec = result.sec - 60;
        result.min++;
    }

    if(result.min >= 60)
    {
        result.min = result.min - 60;
        result.hrs++;
    }

    printf("\nAddition of Time = %d:%d:%d\n",
           result.hrs, result.min, result.sec);

    totalSec = t1.hrs * 3600 + t1.min * 60 + t1.sec;

    printf("First Time in seconds = %d\n", totalSec);
}