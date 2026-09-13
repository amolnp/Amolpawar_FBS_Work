#include <stdio.h>
int main()
{
	int n = 50, flot, fact, count;
	
	printf("prime number are:\n");
	
	for(flot = 2; flot <= n; flot++)
	{
		count = 0;
		for(fact = 1; fact <= n; fact ++)
		{
			if(flot % fact == 0)
			{
				count++;
			}
		}
		if(count == 2)
		{
			printf("%d ", flot);
		}
	}
	
}