#include <stdio.h>
int main()
{
	int a[2][3],b[2][3],sum[2][3];
	int i,j;
	printf("enter the elements of first array: ");
	for (i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i] [j]);
		}
	}
	printf("enter the elements of second array: ");
	for (i=0;i<2;i++)
	    {
		   for(j=0;j<3;j++)
		   {
			  scanf("%d",&b[i][j]);
		   }
	    }
        printf("The sum of 2D matrices are \n");
		for (i=0;i<2;i++)
	    {
		   for(j=0;j<3;j++)
		   {
			  sum[i][j]=a[i][j]+b[i][j];
			  printf("%d\t",sum[i][j]);
		   }
		   printf("\n");
	    }
		
	return 0;
}