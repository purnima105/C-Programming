//program that accepts the price and stock of 5 different bulbs, calculate total stock value
#include <stdio.h>
int main()
{
    int i,stock[5];
    float price[5];
    float total=0;
    for(i=0;i < 5;i++)
    {
    printf("enter the total stock of bulb %d :    ", i+1);
    scanf("%d",&stock[i]);

    printf("enter the price of the bulb %d :    ", i+1);
    scanf("%f",&price[i]);

    total=total+stock[i]*price[i];
    }
    printf("The total stock value of bulb is %f",total);
    
    return 0;
}