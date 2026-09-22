#include <stdio.h>

int greatest(int a, int b, int c)
{	
    int  max;
    
	if(a > b)
	
		if(a > c)
		
			max = a;
		else
		    max = c;
	else
		if(b > c)
		    max = b;
		else
		    max = c;
			printf("Greatest = %d", max);
}
int main()
{
	int a = 20, b = 50, c = 60;
	greatest(a, b, c);
}