#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the 1st number: ");
    scanf("%d",&a);
    printf("enter 2nd number :  ");
    scanf("%d",&b);
    (a>b)? printf("%d is larger",a): printf("%d is larger",b);
    return 0;

}