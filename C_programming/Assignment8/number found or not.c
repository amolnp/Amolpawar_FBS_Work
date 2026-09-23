#include <stdio.h>
int main()
{
	int arr[5], i, num, found = 0;
	printf("Enter 5 number");
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter number search");
	scanf("%d", &arr[num]);
	
	for(i = 0; i < 5; i++)
	{
		if(arr [i] == num)
		{
		found = 1;
		break;
		}
	}
	if(found == 1)
	
    	printf("Number is found");
    else
    	printf("Number is not found");
	
}