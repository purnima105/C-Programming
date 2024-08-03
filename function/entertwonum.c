//wap to print num using function
#include <stdio.h>
int sum(int x,int y);
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    sum(a,b);
  
return 0;
}   

int sum(x,y)
{
    printf("the numbers are:%d and %d ",x,y);
}
