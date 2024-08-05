//wap to print maximum number in a array of size n
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,i,max,n,min;
    printf("enter size of array: \n");
    scanf("%d",&n);
     p=(int*)malloc(n*sizeof(int));
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
   
     max=p[0];
     min=p[0];
     
    for(i=0;i<n;i++)
    {
       
        if(p[i]>max)
        {
            max=p[i];
        }
    }
        for(i=0;i<n;i++)
        {
        if(p[i]<min)
        {
            min=p[i];
        }
        }
        printf("the maximum number is %d\n",max);
        printf("the maximum number is %d",min);
return 0;
    
}