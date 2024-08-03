//transpose of matrix
#include <stdio.h>
int main()
{
    int a[3][2]={{1,2,3},{4,5,6}};
    int t[2][3];
    int i,j;
    printf(" The original matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }  
        printf("\n");
    }
    printf("\n");
    printf("the transpose of matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            t[j][i]=a[i][j];
            printf("%d\t",t[j][i]);

        }
        printf("\n");

    }

    return 0;

}