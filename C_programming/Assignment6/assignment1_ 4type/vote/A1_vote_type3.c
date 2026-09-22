#include <stdio.h>

int vote()
{
	int age = 20;
	if(age >= 18)
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
		
		int result;
		
		result = vote();
		
		if(result == 1)
		
			printf("eligible to vote");
		
		else
		
			printf("Not eligible to vote");
		
}