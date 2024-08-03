//print sum ,maximum and minimum using DMA
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    int *p; int sum=0, min,max;
    printf("enter the number to be stored: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter the elements: ");
    for (i=0;i<n;i++)
    {
        scanf("%d", p+i);
        sum=sum+*(p+i);
    }

    max=*p;
    min=*p;

    for(i=0;i<5;i++)
    {
    if (*(p+i)>max)
        max=*(p+i);
    if(*(p+i)<min)
        min=*(p+i);
    }

    free(p);
    printf("the sum is %d",sum);
    printf("\nthe maximum number is %d",max);
    printf("\nthe minimum number is %d",min);
    return 0;

}