#include <stdio.h>

int vowelconsonant()
{
		char ch = 'a';
		
        if(ch == 'a' || ch == 'e' || ch == 
	'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 
	'I' || ch == 'O' || ch == 'U')
   {
   	return 1;
   }
   else
   {
   	return 0;
   }

}
int main()
{
	
	int result;
	result = vowelconsonant();
	
	if(result == 1)
	
        printf("Vowel");
    else
        printf("Consonant");
    
}