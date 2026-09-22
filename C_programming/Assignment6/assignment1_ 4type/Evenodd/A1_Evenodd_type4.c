#include <stdio.h>

int evenodd(int n)
{	
	if(n % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n = 10;
	int result;
	
	result = evenodd(n);
	
	if(result == 1)
	    printf("Even");
	else
    	printf("Odd");
}