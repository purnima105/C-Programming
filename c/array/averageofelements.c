#include<stdio.h>
#define n 10
int main()
{
    int a[3],i;
    int sum=0;
    float average;
    printf("enter the elements of array: ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        sum=sum+a[i];
    }
        average=(float)sum/3;
 printf("the sum is : %d",sum);
printf("\nthe average is : %f",average);
return 0;
}