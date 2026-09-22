#include <stdio.h>

int palindrome()
{
    int n = 232, original, reverse;

    original = n;

    reverse = (n % 10) * 100;
    n = n / 10;

    reverse = reverse + (n % 10) * 10;
    n = n / 10;

    reverse = reverse + (n % 10);

    if(original == reverse)
    
       return 1;
    
    else
    
       return 0;  
}
int main()
{
	int result;
	
	result = palindrome();
	if(result == 1)
    	printf("Palindrome");
	else
	    printf("Not Palindrome"); 
	
}