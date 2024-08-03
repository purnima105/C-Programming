#include <stdio.h>
struct book 
{
    int id;
    float price;
};
int main()
{
    struct book b1={1,265.5};
    struct book *p;
    p= & b;
    printf("ID using pointer:%d",p-> id);
printf("\n Price using pointer:%f",p ->price);
    return 0;
}