#include <stdio.h>
int leapYear()
{
	int year = 2010;
	
	if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
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
	
	result = leapYear();
	if(result == 1)
	printf("Leap year");
	else
	printf("Not leap year");
}