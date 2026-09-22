#include <stdio.h>

int vote(int age)
{
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
		int age = 20;
		
		int result;
		
		result = vote(age);
		
		if(result == 1)
		
			printf("eligible to vote");
		
		else
		
			printf("Not eligible to vote");
		
}