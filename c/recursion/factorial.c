#include <stdio.h>
int fact(int n);
int main()
{
    int n,a;
    printf("enter the number: ");
    scanf("%d",&n);
    a=fact(n);
    printf("the factorial of n is:%d",a);
    return 0;

}
int fact(int n)
{
    if(n==1)
    return 1; 
    else
    return n*fact(n-1);

}