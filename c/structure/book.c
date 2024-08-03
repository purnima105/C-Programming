#include <stdio.h>
#include <string.h>
struct book
{
     int book_id;
     char title[30];
     float price;
};
 
int main()
{
struct book b1;
b1.book_id=12;
strcpy (b1.title,"c-programming");
b1.price=387.7;

printf("The book_id,title,price are: \n");
printf("%d,%s,%f",b1.book_id,b1.title,b1.price);

return 0;
}