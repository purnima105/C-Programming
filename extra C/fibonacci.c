//Priting fibonacci series upto n term  USING FUNCTION
//0,1,1,3,5,8.....
#include <stdio.h>

fibo(int n)
{
    if (n==0)
        return 0;
    else if(n==1)
        return 1;
    else
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n,result;
    printf("print the first n terms of Fibonacci series: \n");
    printf("enter the value of n: ");
    scanf("%d",&n);

    result=fibo(n);
    printf("the fibonacci series is");
    for(int i=0;i<=n;i++)
    {
        result=fibo(i);
        printf("%d\t",result);
    }
return 0;

}