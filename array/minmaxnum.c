#include <stdio.h>
int main()
{
    int i,min,max,a[5];
    printf("enter the elements of array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<5;i++)
    {
       if(max<a[i])
       {
        max=a[i];
       }
    }
     for(i=1;i<5;i++)
    {
       if(min>a[i])
       {
        min=a[i];
       }

    }
    printf("the maximum element in the array is %d\n",max);
     printf("the minimum element in the array is %d",min);
     return 0;
}

