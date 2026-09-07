#include <stdio.h>
int main()
{
	int year = 2010;
	
	if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		printf("Leep year");
	}
	else
	{
		printf("Not leep year");
	}
}