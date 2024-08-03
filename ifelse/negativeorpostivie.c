//to check wheather the given num is positive or negative
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the given number to be checked:  ");
    scanf("%d",&n);
    if(n < 0)
    {
        printf("the number is negative");
    }
    else 
    
        printf("the number is postive");
    
    return 0;
}