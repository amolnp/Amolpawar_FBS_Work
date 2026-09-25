#include <stdio.h>
#include <string.h>

struct Movie
{
    char title[50];
    char director[50];
    int year;
    char genre[30];
};

int main()
{
    struct Movie m[10];
    int n = 0;
    int choice;
    int i;
    char searchTitle[50];

    do
    {
        printf("\n--- Movie Database ---\n");
        printf("1. Add Movie\n");
        printf("2. Search Movie\n");
        printf("3. Update Movie\n");
        printf("4. Display Movies\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("\nEnter Movie Title: ");
            scanf("%s", m[n].title);

            printf("Enter Director: ");
            scanf("%s", m[n].director);

            printf("Enter Release Year: ");
            scanf("%d", &m[n].year);

            printf("Enter Genre: ");
            scanf("%s", m[n].genre);

            n++;

            printf("Movie added successfully!\n");
        }

        else if(choice == 2)
        {
            printf("\nEnter movie title to search: ");
            scanf("%s", searchTitle);

            for(i = 0; i < n; i++)
            {
                if(strcmp(m[i].title, searchTitle) == 0)
                {
                    printf("\nMovie Found!\n");
                    printf("Title: %s\n", m[i].title);
                    printf("Director: %s\n", m[i].director);
                    printf("Year: %d\n", m[i].year);
                    printf("Genre: %s\n", m[i].genre);
                }
            }
        }

        else if(choice == 3)
        {
            printf("\nEnter movie title to update: ");
            scanf("%s", searchTitle);

            for(i = 0; i < n; i++)
            {
                if(strcmp(m[i].title, searchTitle) == 0)
                {
                    printf("Enter new Director: ");
                    scanf("%s", m[i].director);

                    printf("Enter new Release Year: ");
                    scanf("%d", &m[i].year);

                    printf("Enter new Genre: ");
                    scanf("%s", m[i].genre);

                    printf("Movie updated successfully!\n");
                }
            }
        }

        else if(choice == 4)
        {
            printf("\n--- All Movies ---\n");

            for(i = 0; i < n; i++)
            {
                printf("\nMovie %d\n", i + 1);
                printf("Title: %s\n", m[i].title);
                printf("Director: %s\n", m[i].director);
                printf("Year: %d\n", m[i].year);
                printf("Genre: %s\n", m[i].genre);
            }
        }

        else if(choice == 5)
        {
            printf("Program Ended.\n");
        }

        else
        {
            printf("Invalid choice!\n");
        }

    } while(choice != 5);
}