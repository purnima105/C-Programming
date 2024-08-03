/*wap to create a structure book with book_id,book_name,price. Read the detail of n books and display 
details of most expensive books*/
#include <stdio.h>
#include <string.h>
struct Book 
{
    int book_id;
    char book_name[100];
    float price;
};

int main() 
{
    int n;
    int a;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book books[n];
        for (int i = 0; i < n; i++) 
        {
        printf("\nEnter details of Book %d:\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &books[i].book_id);
        printf("Book Name: ");
        scanf("%s",books[i].book_name);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    // Finding the most expensive book
    int max_index = 0;
    for (int i = 1; i < n; i++) 
    {
        if (books[i].price > books[max_index].price) {
            max_index = i;
        }
    }
    // Displaying details of the most expensive book
    printf("\nDetails of the most expensive book:\n");
    printf("Book ID: %d\n", books[max_index].book_id);
    printf("Book Name: %s\n", books[max_index].book_name);
    printf("Price: %.2f\n", books[max_index].price);

    return 0;
}