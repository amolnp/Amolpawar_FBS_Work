#include <stdio.h>

int main()
{
	float c, f;
	
	printf("Enter the temprature in celsius: ");
	scanf("%f", &c);
	
	f = (c * 9 / 5) + 32;
	
	printf("Temprature in fahrenheit =%.2", f);
}