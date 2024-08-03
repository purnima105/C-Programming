#include <stdio.h>
int fib(int n);
int main()
{
    int n,a;
    printf("enter the number: ");
    scanf("%d",&n);
    a=fib(n);
    printf("the fabonacci of n is:%d",a);
    return 0;

}
int fib(int n)
{
    if(n==0)
    return 0;
    else if (n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2);

}