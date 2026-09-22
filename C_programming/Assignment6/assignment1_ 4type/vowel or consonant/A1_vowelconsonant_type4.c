#include <stdio.h>

int vowelconsonant(char ch)
{		
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
	char ch = 'a';
	int result;
	
	result = vowelconsonant(ch);
	
	if(result == 1)
	
        printf("Vowel");
    else
        printf("Consonant");
    
}