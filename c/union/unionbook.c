#include <stdio.h>
union ubook
{
    int ID;
    
    float price;
};
union ubook ub;
int main()
{
    ub.ID=3;
    printf("ID :%d",ub.ID);
    
    ub.price=105.6;
    printf("price:%f",ub.price);
    return 0;

}