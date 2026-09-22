#include <stdio.h>

void evenodd(int n)
{
	
	if(n % 2 == 0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}
int main()
{
	int n = 10;
	
	evenodd(n);
}