#include <stdio.h>

struct Book
{
    char bname[50];
    int id;
    char author[50];
    float price;
};

int main()
{
    struct Book b;

    printf("Enter book name: ");
    scanf("%s", b.bname);

    printf("Enter book id: ");
    scanf("%d", &b.id);

    printf("Enter author name: ");
    scanf("%s", b.author);

    printf("Enter price: ");
    scanf("%f", &b.price);

    printf("\n--- Book Details ---\n");
    printf("Book Name: %s\n", b.bname);
    printf("Book ID: %d\n", b.id);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}