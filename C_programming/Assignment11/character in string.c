#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, found = 0;

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Character found");
    else
        printf("Character not found");
}