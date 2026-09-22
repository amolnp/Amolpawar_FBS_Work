#include <stdio.h>
void uppercase()
{
	char ch = 'A';
	
	if(ch >= 'A' && ch <='Z')
	{
		printf("Uppercase");
		
	}
	else if(ch >= 'a' && ch <= 'z')
	{
		printf("Lowercase");
	}
	else
	{
		printf("Not a alphabet");
	}
	
}
int main()
{
	uppercase();
}