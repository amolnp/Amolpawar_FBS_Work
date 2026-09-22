#include <stdio.h>

void palindrome(int n)
{
    int original, reverse;

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
int main()
{
	int n = 232;
	palindrome(n);
}