#include <stdio.h>
float salary(float basic)
{
	float da, ta, hra, total;
	
	if(basic <= 9000)
	{
		da = basic * 20 / 100;
		ta = basic * 30 / 100;
		hra = basic * 50 / 100;
	}
	else
	{
		da = basic * 15 / 100;
		ta = basic * 30 / 100;
		hra = basic * 50 / 100;
	}
	total = da + ta + hra;
	
	return total;
}
int main()
{
	float basic =9000;
	float total;
	
    total = salary(basic);
	
	printf("Total salary = %.2f", total);
}