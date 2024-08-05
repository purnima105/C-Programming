//wap to print cube of a number using function passs by reference 
#include <stdio.h>
#include <math.h>
void function(int *p);
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    function(&a);
    return 0;
}
void function(int*p)
{
    int cube;
    cube=pow(*p,3);   //num ko power ma 3
    printf("cube of %d is %d",*p,cube);

} 