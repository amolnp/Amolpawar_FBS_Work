#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, last;

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    last = 0;

    while(str[last] != '\0')
    {
        last++;
    }

    last--;

    temp = str[0];
    str[0] = str[last];
    str[last] = temp;

    printf("New string = %s", str);
}