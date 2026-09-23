#include <stdio.h>

int main()
{
    char str[100];
    int i, j, palindrome = 1;

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    j = 0;

    while(str[j] != '\0')
    {
        j++;
    }

    j--;

    for(i = 0; i < j; i++, j--)
    {
        if(str[i] != str[j])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is Not Palindrome");
    }
}