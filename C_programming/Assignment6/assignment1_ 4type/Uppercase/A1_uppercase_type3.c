#include <stdio.h>
int uppercase()
{
	char ch = 'A';
	
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
	int result;
	
	result = uppercase();
	
	if(result == 1)
		printf("Uppercase");
	else 
		printf("Lowercase");
}