//to store integer and print odd numbers usig DMA
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    int *p;
    printf("enter the number of the interger to be stored: ");
    scanf("%d",&n);
    p= (int*) calloc(n,sizeof(int));
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", p+i);
    }
    printf("the odd number are:");
    for(i=0;i<n;i++)
    {
        if(*(p+i)%2!=0)
        {
            printf("\n%d",*p+i);
        }

    }
    free(p);
    return 0;

}
