//wap to  print sum of digit of an interger using interger using recursion
#include <stdio.h>
int findsum(int n,int sum);
int main()
{
    int sum,n;
    printf("enter the number :");
    scanf("%d",&n);
    sum=findsum(n,0);
    printf("the sum of the digit is %d",sum);
}
int findsum(int n, int sum)
{
    
    if (n == 0)
    {
        return sum;
    }
    else
    {
         sum=sum+n%10;
        return findsum(n/10,sum);
    }
}