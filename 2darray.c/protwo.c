#include <stdio.h>
int main()
{
    int i,j,A[3][2], B[3][2],product[3][2];
    printf("enter the elements of array: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter the elements of array: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            product[i] [j]=A[i][j]*B[i][j];
            printf("the product is %d\n",product[i][j]);
        }
    }
    return 0;
}