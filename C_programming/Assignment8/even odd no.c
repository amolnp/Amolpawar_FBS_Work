#include <stdio.h>
int main()
{
	int arr[5], i;
	
	printf("Enter 5 numbers");
	
	for(i = 0; i < 5; i++)
	{
	 scanf("%d", &arr[i]);
	}
	 printf("Even numbers: ");
	
	for(i = 0; i < 5; i++)
	{
	 if(arr[i] % 2 == 0)
		printf("%d ", arr[i]);
	}
	printf("\nodd numbers: ");
	
	for(i = 0; i < 5; i++)
	{
	 if(arr[i] % 2 == !0)
		printf("%d ", arr[i]);
	}
}