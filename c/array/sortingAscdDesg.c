#include <stdio.h>
int main()
{
    int a[5],i,n,j,temp;
    printf("enter the elements of array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the elements before sortting are");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
    for(i=0;i<5-1;i++)
    {
        for(j=i+1;j<i;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nthe elements after sorting are:");
    for(i=0;i<5;i++)
    {
    printf("\t%d",a[i]);
    }
    return 0;
}