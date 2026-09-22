#include <stdio.h>

void vovelconsonant(char ch)
{
        if(ch == 'a' || ch == 'e' || ch == 
	'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 
	'I' || ch == 'O' || ch == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }

}
int main()
{
	char ch = 'a';
	vovelconsonant(ch);
}