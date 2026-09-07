#include <stdio.h>
int main()
{
	float basic =9000;
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
	
	printf("basic salary = %.2f\n", basic);
	printf("DA = %.2f\n", da);
	printf("TA = %.2f\n", ta);
	printf("HRA = %.2f\n", hra);
	printf("Total salary =%2f", total);
}