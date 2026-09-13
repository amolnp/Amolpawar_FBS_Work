#include <stdio.h>
int main()
{
	int n = 2000, num, fact, sum;
	
	printf("Perfect number are:\n");
	
	for(num = 1; num <= n; num++)
	{
		sum = 0;
		
		for(fact = 1; fact < num; fact++)
		{
			if(num % fact == 0)
			{
				sum = sum + fact;
			}
		}
		if(sum == num)
		{
			printf("%d ", num);
		}
	}
}