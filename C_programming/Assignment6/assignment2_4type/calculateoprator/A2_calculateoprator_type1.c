#include <stdio.h>
int calculate()
{
	int a = 50;
	int b = 30;
	char op = '+';
	
	switch(op)
	{
		case '+':
			 printf("%d", a + b);
		     break;
				
		case '-':
			printf("%d", a - b);
			break;	
			
			case '*':
			printf("%d", a * b);
			break;			
				
				case '/':
					printf("%d", a / b);
					break;
					
					case '%':
						printf("%d", a % b);
						break;
						
						default:
							printf("Invalid operator");
	}                       
}  
int main()
{
	calculate();
			   }               