#include <stdio.h>
int calculate(int a, int b, char op, int result)
{	
	switch(op)
	{
		case '+':
			 return a + b;
		     break;
				
		case '-':
			return a - b;
			break;	
			
			case '*':
			return a * b;
			break;			
				
				case '/':
					return a / b;
					break;
					
					case '%':
						return a % b;
						break;
						
						default:
								return 0;
	}                       
}  
int main()
{
	int a = 50;
	int b = 30;
	char op = '+';
	
	int result;
	
	result = calculate(a, b, op, result);
	
	printf("%d", result);
	
			   }               