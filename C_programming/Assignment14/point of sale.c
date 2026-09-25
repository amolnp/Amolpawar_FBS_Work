#include <stdio.h>

struct Product
{
    char name[30];
    float price;
    int quantity;
};

int main()
{
    struct Product p[10];
    int n, i;
    float total = 0;

    printf("Enter number of products: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Product %d details\n", i + 1);

        printf("Name: ");
        scanf("%s", p[i].name);

        printf("Price: ");
        scanf("%f", &p[i].price);

        printf("Quantity: ");
        scanf("%d", &p[i].quantity);
    }

    printf("\n--- BILL ---\n");

    for(i = 0; i < n; i++)
    {
        float cost = p[i].price * p[i].quantity;

        printf("%s\t%.2f x %d = %.2f\n",
               p[i].name,
               p[i].price,
               p[i].quantity,
               cost);

        total = total + cost;
    }

    printf("\nTotal Cost = %.2f\n", total);
}