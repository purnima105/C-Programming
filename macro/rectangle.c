#include <stdio.h>
#define rect(l,b) (l*b)
int main()
{
    float l,b;
    printf("enter the length and breadth: ");
    scanf("%f%f",&l,&b);
    printf("area of rectangle is %f",rect(l,b));
    return 0;
}