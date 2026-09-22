#include <stdio.h>
int uppercase(char ch)
{
    	if(ch >= 'A' && ch <='Z')
	
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
	char ch = 'A';
	
	int result;
	
	result = uppercase(ch);
	
	if(result == 1)
		printf("Uppercase");
	else 
		printf("Lowercase");
}