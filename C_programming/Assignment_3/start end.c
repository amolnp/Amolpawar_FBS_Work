#include <stdio.h>
int main()
{
	int start = 1, end = 20, sum = 0, i;
	
	
	for(i = start; i <= end; i++)
	{
		sum = sum + i;
	}
	printf("sum = %d", sum);
}