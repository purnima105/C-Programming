//wap to read P*Q matrix of integer and find the largest of each row and display it.
#include <stdio.h>
int main()
{
    int a[50][50];
    int i,j;
    int larg;
    int P,Q;
    printf("enter the number of row:");
    scanf("%d",&P);
    printf("enter the number of column:");
    scanf("%d",&Q); 

    printf("enter the elements of array:");
    for(i=0;i<P;i++)
    {
        for (j=0;j<Q;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<P;i++)
    {
       larg=a[i][0];
        for(j=1;j<Q;j++)
        { 
            if(a[i][j]>larg)
            {
               
                larg=a[i][j];
                
            }
        }
    printf("the larger element of the row-%d is %d\n ",i+1,larg);
    }
    
    return 0;
}