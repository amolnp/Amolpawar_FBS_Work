#include <stdio.h>
int main()
{
	int n = 10000, num, temp, digit, sum, fact, i;
	
	printf("Strong number are:\n");
	
	for(num = 1; num <= n; num++)
	{
		temp = num;
		sum = 0;
		while(temp !=0)
		{
			digit = temp % 10;
			
			fact = 1;
			
			for(i = 1; i <= digit; i++)
			{
				fact = fact * i;
			}
			sum = sum + fact;
			temp = temp / 10;
		}
		if(sum == num)
		{
			printf("%d ", num);
		}
	}
}