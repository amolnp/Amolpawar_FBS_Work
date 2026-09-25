#include <stdio.h>
#include <string.h>

typedef struct Book
{
    int bookId;
    char bookName[50];
    char authorName[50];
    char category[30];
    float price;
    float rating;
} Book;

void addBook(Book* b)
{
    printf("\nEnter Book ID: ");
    scanf("%d", &b->bookId);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b->bookName);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b->authorName);

    printf("Enter Category: ");
    scanf(" %[^\n]", b->category);

    printf("Enter Price: ");
    scanf("%f", &b->price);

    printf("Enter Rating: ");
    scanf("%f", &b->rating);

    printf("\nBook added successfully!\n");
}

void displayBook(Book* b)
{
    printf("\nBook ID: %d", b->bookId);
    printf("\nBook Name: %s", b->bookName);
    printf("\nAuthor Name: %s", b->authorName);
    printf("\nCategory: %s", b->category);
    printf("\nPrice: %.2f", b->price);
    printf("\nRating: %.1f\n", b->rating);
}

int searchBookById(Book* books, int count, int id)
{
    for(int i = 0; i < count; i++)
    {
        if(books[i].bookId == id)
        {
            return i;
        }
    }

    return -1;
}

int searchBookByName(Book* books, int count, char name[])
{
    for(int i = 0; i < count; i++)
    {
        if(strcmp(books[i].bookName, name) == 0)
        {
            return i;
        }
    }

    return -1;
}

void removeBook(Book* books, int* count, int id)
{
    int index = searchBookById(books, *count, id);

    if(index == -1)
    {
        printf("\nBook Not Found!");
        return;
    }

    for(int i = index; i < *count - 1; i++)
    {
        books[i] = books[i + 1];
    }

    (*count)--;

    printf("\nBook removed successfully!");
}

void showAuthorsBooks(Book* books, int count, char author[])
{
    int found = 0;

    for(int i = 0; i < count; i++)
    {
        if(strcmp(books[i].authorName, author) == 0)
        {
            displayBook(&books[i]);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("\nNo books found for this author!");
    }
}

void showCategoryBooks(Book* books, int count, char category[])
{
    int found = 0;

    for(int i = 0; i < count; i++)
    {
        if(strcmp(books[i].category, category) == 0)
        {
            displayBook(&books[i]);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("\nNo books found in this category!");
    }
}

void updateBook(Book* books, int count, int id)
{
    int index = searchBookById(books, count, id);

    if(index == -1)
    {
        printf("\nBook Not Found!");
        return;
    }

    printf("\nCurrent Price: %.2f", books[index].price);
    printf("\nCurrent Rating: %.1f", books[index].rating);

    printf("\n\nEnter New Price: ");
    scanf("%f", &books[index].price);

    printf("Enter New Rating: ");
    scanf("%f", &books[index].rating);

    printf("\nBook updated successfully!");
}void sortBooksByPrice(Book* books, int count)
{
    Book temp;

    for(int i = 0; i < count - 1; i++)
    {
        for(int j = i + 1; j < count; j++)
        {
            if(books[i].price < books[j].price)
            {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }

    printf("\nBooks sorted by Price (Highest to Lowest):\n");

    for(int i = 0; i < count; i++)
    {
        displayBook(&books[i]);
    }
}

void sortBooksByRating(Book* books, int count)
{
    Book temp;

    for(int i = 0; i < count - 1; i++)
    {
        for(int j = i + 1; j < count; j++)
        {
            if(books[i].rating < books[j].rating)
            {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }

    printf("\nBooks sorted by Rating (Highest to Lowest):\n");

    for(int i = 0; i < count; i++)
    {
        displayBook(&books[i]);
    }
}

void top3BooksByPrice(Book* books, int count)
{
    Book temp;

    for(int i = 0; i < count - 1; i++)
    {
        for(int j = i + 1; j < count; j++)
        {
            if(books[i].price < books[j].price)
            {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }

    printf("\nTop 3 Books by Price:\n");

    int limit = count < 3 ? count : 3;

    for(int i = 0; i < limit; i++)
    {
        displayBook(&books[i]);
    }
}


void top3BooksByRating(Book* books, int count)
{
    Book temp;

    for(int i = 0; i < count - 1; i++)
    {
        for(int j = i + 1; j < count; j++)
        {
            if(books[i].rating < books[j].rating)
            {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }

    printf("\nTop 3 Books by Rating:\n");

    int limit = count < 3 ? count : 3;

    for(int i = 0; i < limit; i++)
    {
        displayBook(&books[i]);
    }
}

int main()
{
    Book books[100];
    int count = 0;
    int choice;
    int id;
    int index;

    do
    {
        printf("\n\n===== Book Management System =====");
        printf("\n1. Add Book");
        printf("\n2. Display All Books");
        printf("\n3. Search Book By ID");
        printf("\n4. Search Book By Name");
        printf("\n5. Remove Book");
        printf("\n6. Show Athors Name");
        printf("\n7. Show Category Name");
        printf("\n8. Update Book");
        printf("\n9. Sort Books by price");
        printf("\n10. Sort Books By Rating");
        printf("\n11. Top 3 Books By Price");
        printf("\n12. Top 3 Books By Rating");
        printf("\n11. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook(&books[count]);
                count++;
                break;

            case 2:
                for(int i = 0; i < count; i++)
                {
                    displayBook(&books[i]);
                }
                break;
                
            case 3:
                printf("\nEnter Book ID: ");
                scanf("%d", &id);

                index = searchBookById(books, count, id);

                if(index != -1)
                {
                 printf("\nBook Found!");
                 displayBook(&books[index]);
                }
            else
                {
                 printf("\nBook Not Found!");
                }
            case 4:
               {
                 char name[50];
   
                 printf("\nEnter Book Name: ");
                 scanf(" %[^\n]", name);

                 index = searchBookByName(books, count, name);

                 if(index != -1)
                {
                 printf("\nBook Found!");
                 displayBook(&books[index]);
                }
            else
                {
                 printf("\nBook Not Found!");
                }

    break;
                }
            case 5:
                 printf("\nEnter Book ID to Remove: ");
                 scanf("%d", &id);

                 removeBook(books, &count, id);

    break;
    
            case 6:
            	
				{
                 char author[50];

                  printf("\nEnter Author Name: ");
                  scanf(" %[^\n]", author);

                 showAuthorsBooks(books, count, author);

    break;
                }
            case 7:
                {
                 char category[30];

                 printf("\nEnter Category: ");
                 scanf(" %[^\n]", category);

                 showCategoryBooks(books, count, category);

    break;
                }
    break;
                 
            case 8:
                printf("\nEnter Book ID to Update: ");
                scanf("%d", &id);

                updateBook(books, count, id);

    break;
    
            case 9:
             sortBooksByPrice(books, count);
    break;
    
            case 10:
             sortBooksByRating(books, count);
    break;
            case 11:	
             top3BooksByPrice(books, count);
    break;

            case 12:
             top3BooksByRating(books, count);
    break;
            case 14:
                printf("\nThank you!");
                break;

            default:
                printf("\nInvalid choice!");
        }

    } while(choice != 14);

}