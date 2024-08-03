//swapping two number using function
#include <stdio.h>
void swap(int *a,int *b);
int main()
{
    int a,b;
    printf("enter the two numbers: ");
    scanf("%d%d",&a,&b);
    printf("before swapping: %d   %d",a,b);
    swap(&a,&b);
    printf("\nafter swapping : %d     and   %d\n",a,b);
return 0;

}
void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}