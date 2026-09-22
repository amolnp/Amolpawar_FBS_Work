#include <stdio.h>
int leapYear(int year)
{
	
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
	int year = 2010;
	int result;
	
	result = leapYear(year);
	if(result == 1)
	printf("Leap year");
	else
	printf("Not leap year");
}