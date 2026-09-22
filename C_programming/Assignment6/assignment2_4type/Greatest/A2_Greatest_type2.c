#include <stdio.h>

int greatest(int a, int b, int c)
{	
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
	int a = 20, b = 50, c = 60;
	greatest(a, b, c);
}