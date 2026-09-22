#include <stdio.h>

int vote()
{
	int age = 20;
	if(age >= 18)
	{
		printf("Eligible to vote");	
	}
	else
	{
		printf("Not eligible mto vote");
	}
	
}
int main()
{
	vote();
}