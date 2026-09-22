#include <stdio.h>
void agecategory(int age)
{
	
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
int main()
{
	int age = 23;
	
	agecategory(age);
}