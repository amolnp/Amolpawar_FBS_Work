#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a')
        {
            str[i] = '$';
        }
    }

    printf("New string = %s", str);
}