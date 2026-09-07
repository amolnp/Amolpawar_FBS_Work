#include <stdio.h>
void main(){
	int marks=68;
	if(marks>=75)
	{
		printf("distinction");
	}
	else if(marks>=65 && marks<75)
	{
		printf("firstclass");
	}
	else if(marks>55)
	{
		printf("secondclass");
	}
	else if(marks>35)
	{
		printf("passclASS");
	
	}
	else 
	{
		printf("fail");
	}
}