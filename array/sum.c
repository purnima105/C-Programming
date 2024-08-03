//wap to input 5 integers in an array and print the sum of all those 5 integer
#include <stdio.h>
int main()
{
    int a[5],i,sum=0,product=1;
    printf("enter the elements of an array: ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++)
    {
        sum=sum+a[i];
        product=product*a[i];
    }
    printf("the sum is %d\n",sum);
    printf("the product is %d",product);
    return 0;
}