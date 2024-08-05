//wap to print sum of following series upto n
#include <stdio.h>
int main()
{
    int n;
    int i;
    int sum=0;
    int a;
    printf("enter the value of n and a : ");
    scanf("%d%d",&n,&a);
    for(i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            sum=sum-a*(i/i);
        }
        else
        {
            sum=sum+a*(i/i);
        }
            

    }
    printf("the sum is %d",sum);
    return 0;
}