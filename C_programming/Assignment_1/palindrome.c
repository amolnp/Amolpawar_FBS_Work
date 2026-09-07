#include <stdio.h>

int main()
{
    int n = 232, original, reverse;

    original = n;

    reverse = (n % 10) * 100;
    n = n / 10;

    reverse = reverse + (n % 10) * 10;
    n = n / 10;

    reverse = reverse + (n % 10);

    if(original == reverse)
    
        printf("Palindrome");
    
    else
    
        printf("Not Palindrome");
    

    
}