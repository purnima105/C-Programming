#include <stdio.h>
#define n 5
int main()
{
    int a[n]={3,8,2,6,4};
    int i;
    printf("the elements of original are: ");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    sort (a);
    printf("\nThe elements of sorted array are: ");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

void sort (int a[n])
{
    int i,j,temp;          //i,j:loops temp:swapping
    for (i=0;i<n-1;i++)
    {
        for (j=i-1;j<n;j++)
        {
            if(a[j]<a[j+1])
            {

                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}