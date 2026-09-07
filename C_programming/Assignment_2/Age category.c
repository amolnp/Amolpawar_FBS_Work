#include <stdio.h>
int main()
{
	int age = 23;
	
	if(age < 16)
	
		printf("child");
	
	else 
	if(age >= 16 && age <= 18)
	
		printf("Teenager");
	
	else
	if(age >= 19 && age <= 60)
	
		printf("Adult");
	
	else
	
		printf("Senior");
	
}