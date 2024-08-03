//to check wheather the number is odd or even
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number to be checked: ");
    scanf ("%d",&n);
    if(n%2==0)
    {
        printf("the num is even");
    }
    else
    {
        printf("the number is odd");
    }
    return 0;
}