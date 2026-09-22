#include <stdio.h>
void uppercase(char ch)
{
	
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
	char ch = 'A';
	
	uppercase(ch);
}