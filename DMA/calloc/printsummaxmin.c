//to find sum maximum and minimum using DMA(calloc)
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,max,min,sum=0;
    int *p;
    printf("enter the number of value to be stored: ");
    scanf("%d",&n);
    p=(int*) calloc(n,sizeof(int));
    printf("enter the elements: ");
    for (i=0;i<n;i++)
    {
        scanf("%d", p+i);
        sum=sum+*(p+i);
    }
    max= *p;                   // max : first element
    min= *p;                 // min: first element
    for(i=1;i<n;i++)
    {
        if(*(p+i)>max)
            max=*(p+i);
        if(*(p+i)<min)
            min=*(p+i);
    }
    free(p);
    printf("The sum is %d\n",sum);
    printf("The maximum is %d\n",max);
    printf("The minimum is %d\n",min);
    
    return 0;
}
