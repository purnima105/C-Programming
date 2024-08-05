#include <stdio.h>
void largrow(int a[10][10],int p,int q);
int main()
{
    int a[10][10];
    int i,j;
    int larg;
    int p,q;
    printf("enter the number of row:");
    scanf("%d",&p);
    printf("enter the number of column:");
    scanf("%d",&q);

    printf("enter the elements of array:");
    for(i=0;i<p;i++)
    {
        for (j=0;j<q;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    largrow(a,p,q);
    return 0;
}
void largrow(int a[10][10],int p, int q)
{
    int i,j,larg;
     for(i=0;i<p;i++)
    {
       larg= a [i][0];
        for(j=1;j<q;j++)
        { 
            if(a[i][j]>larg)
            {
               
                larg=a[i][j];
                
            }
        }
    printf("the larger element of the row-%d is %d\n ",i+1,larg);
    }
    
}