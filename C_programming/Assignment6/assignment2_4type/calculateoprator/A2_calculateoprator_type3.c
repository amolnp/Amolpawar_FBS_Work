#include <stdio.h>
int calculate()
{	int a = 50;
	int b = 30;
	char op = '+';
	int result;
	
	switch(op)
	{
		case '+':
			 result = a + b;
		     break;
				
		case '-':
			result = a - b;
			break;	
			
			case '*':
			result = a * b;
			break;			
				
				case '/':
					result = a / b;
					break;
					
					case '%':
						result = a % b;
						break;
						
						default:
							result = 0;
	}            
	return result;           
}  
int main()
{
	int result;
	
	result = calculate();
	
	printf("%d", result);
	
			   }               