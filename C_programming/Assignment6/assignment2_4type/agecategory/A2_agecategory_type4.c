#include <stdio.h>
int agecategory(int age)
{
	
	if(age < 16)
		return 1;
	else 
	if(age >= 16 && age <= 18)
	
		return 2;
	else
	if(age >= 19 && age <= 60)
	
		return 3;
	else
		return 4;
}
int main()
{
	int age = 23;
	int result;
	
	result = agecategory(age);
	
	if(result == 1)
	    printf("child");
	else if(result == 2)
    	printf("Teenager");
	else if(result == 3)
	    printf("Adult");
	else
    	printf("Senior");
}	
	