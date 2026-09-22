#include <stdio.h>
void leapYear(int year)
{
	if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		printf("Leep year");
	}
	else
	{
		printf("Not leep year");
	}
}
int main()
{
	int year = 2010;
	
	leapYear(year);
}
