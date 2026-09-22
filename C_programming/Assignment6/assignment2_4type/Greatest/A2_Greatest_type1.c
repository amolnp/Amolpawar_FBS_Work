#include <stdio.h>

int greatest()
{
	int a = 20, b = 50, c = 60;
	
	if(a > b)
	
		if(a > c)
		
			printf("Greatest = %d", a);
		else
		
			printf("Greatest = %d", c);
	else
		if(b > c)
		
			printf("Greatest = %d", b);
		else
			printf("Greatest = %d", c);
}
int main()
{
	greatest();
}