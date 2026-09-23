#include <stdio.h>
#include <ctype.h>

/* a. mystrcpy */
void mystrcpy(char dest[], char src[])
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

/* b. mystrlen */
int mystrlen(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

/* c. mystrcmp */
int mystrcmp(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }

        i++;
    }

    return str1[i] - str2[i];
}

/* d. mystrcat */
void mystrcat(char dest[], char src[])
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }

    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}

/* e. mystrncpy */
void mystrncpy(char dest[], char src[], int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    dest[i] = '\0';
}

/* f. mystrupper */
void mystrupper(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }
}

/* g. mystrlower */
void mystrlower(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
}

/* h. mystrrev */
void mystrrev(char str[])
{
    int i = 0;
    int j = mystrlen(str);
    char temp;

    j--;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

/* i. mystrstr */
char *mystrstr(char str[], char sub[])
{
    int i, j;

    if (sub[0] == '\0')
    {
        return str;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; sub[j] != '\0'; j++)
        {
            if (str[i + j] != sub[j])
            {
                break;
            }
        }

        if (sub[j] == '\0')
        {
            return &str[i];
        }
    }

    return NULL;
}

/* j. mystrcasecmp */
int mystrcasecmp(char str1[], char str2[])
{
    int i = 0;
    char c1, c2;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        c1 = tolower(str1[i]);
        c2 = tolower(str2[i]);

        if (c1 != c2)
        {
            return c1 - c2;
        }

        i++;
    }

    return tolower(str1[i]) - tolower(str2[i]);
}

/* k. mystrchr */
char *mystrchr(char str[], char ch)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            return &str[i];
        }

        i++;
    }

    return NULL;
}

/* l. mystrrchr */
char *mystrrchr(char str[], char ch)
{
    int i = 0;
    char *last = NULL;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            last = &str[i];
        }

        i++;
    }

    return last;
}

/* m. mystrncmp */
int mystrncmp(char str1[], char str2[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }

        if (str1[i] == '\0' || str2[i] == '\0')
        {
            break;
        }
    }

    return 0;
}

/* n. mystrnstr */
char *mystrnstr(char str[], char sub[], int n)
{
    int i, j;

    if (sub[0] == '\0')
    {
        return str;
    }

    for (i = 0; str[i] != '\0' && i < n; i++)
    {
        for (j = 0; sub[j] != '\0'; j++)
        {
            if (i + j >= n || str[i + j] != sub[j])
            {
                break;
            }
        }

        if (sub[j] == '\0')
        {
            return &str[i];
        }
    }

    return NULL;
}

/* o. mystrncat */
void mystrncat(char dest[], char src[], int n)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }

    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}

/* p. mystrncasecmp */
int mystrncasecmp(char str1[], char str2[], int n)
{
    int i;
    char c1, c2;

    for (i = 0; i < n; i++)
    {
        c1 = tolower(str1[i]);
        c2 = tolower(str2[i]);

        if (c1 != c2)
        {
            return c1 - c2;
        }

        if (str1[i] == '\0' || str2[i] == '\0')
        {
            break;
        }
    }

    return 0;
}


int main()
{
    char str1[100], str2[100], result[100];
    char *ptr;
    int n, choice, ch;

    printf("Enter String 1: ");
    scanf(" %[^\n]", str1);

    printf("Enter String 2: ");
    scanf(" %[^\n]", str2);

    printf("\n===== Assignment 10 =====\n");
    printf("1.  mystrcpy\n");
    printf("2.  mystrlen\n");
    printf("3.  mystrcmp\n");
    printf("4.  mystrcat\n");
    printf("5.  mystrncpy\n");
    printf("6.  mystrupper\n");
    printf("7.  mystrlower\n");
    printf("8.  mystrrev\n");
    printf("9.  mystrstr\n");
    printf("10. mystrcasecmp\n");
    printf("11. mystrchr\n");
    printf("12. mystrrchr\n");
    printf("13. mystrncmp\n");
    printf("14. mystrnstr\n");
    printf("15. mystrncat\n");
    printf("16. mystrncasecmp\n");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            mystrcpy(result, str1);
            printf("Copied String = %s", result);
            break;

        case 2:
            printf("Length = %d", mystrlen(str1));
            break;

        case 3:
            printf("Result = %d", mystrcmp(str1, str2));
            break;

        case 4:
            mystrcat(str1, str2);
            printf("Concatenated String = %s", str1);
            break;

        case 5:
            printf("Enter n: ");
            scanf("%d", &n);

            mystrncpy(result, str1, n);
            printf("Copied String = %s", result);
            break;

        case 6:
            mystrupper(str1);
            printf("Uppercase = %s", str1);
            break;

        case 7:
            mystrlower(str1);
            printf("Lowercase = %s", str1);
            break;

        case 8:
            mystrrev(str1);
            printf("Reverse = %s", str1);
            break;

        case 9:
            printf("Enter substring: ");
            scanf(" %[^\n]", result);

            ptr = mystrstr(str1, result);

            if (ptr != NULL)
                printf("Substring Found");
            else
                printf("Substring Not Found");

            break;

        case 10:
            printf("Result = %d", mystrcasecmp(str1, str2));
            break;

        case 11:
            printf("Enter character: ");
            scanf(" %c", &ch);

            ptr = mystrchr(str1, ch);

            if (ptr != NULL)
                printf("Character Found");
            else
                printf("Character Not Found");

            break;

        case 12:
            printf("Enter character: ");
            scanf(" %c", &ch);

            ptr = mystrrchr(str1, ch);

            if (ptr != NULL)
                printf("Last Character Found");
            else
                printf("Character Not Found");

            break;

        case 13:
            printf("Enter n: ");
            scanf("%d", &n);

            printf("Result = %d", mystrncmp(str1, str2, n));
            break;

        case 14:
            printf("Enter substring: ");
            scanf(" %[^\n]", result);

            printf("Enter n: ");
            scanf("%d", &n);

            ptr = mystrnstr(str1, result, n);

            if (ptr != NULL)
                printf("Substring Found");
            else
                printf("Substring Not Found");

            break;

        case 15:
            printf("Enter n: ");
            scanf("%d", &n);

            mystrncat(str1, str2, n);
            printf("Result = %s", str1);
            break;

        case 16:
            printf("Enter n: ");
            scanf("%d", &n);

            printf("Result = %d", mystrncasecmp(str1, str2, n));
            break;

        default:
            printf("Invalid Choice");
    } 
}