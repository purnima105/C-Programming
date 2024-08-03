//wap to count the no of even odd and zero number 
#include<stdio.h>
int main()
{
	int i,a[5],even=0,odd=0,zero=0;
	printf("enter the numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		
		if(a[i]==0)
		{
			zero++;
		}
		else if(a[i]%2==0)
		{
			even++;
		}
		else 
		{
			odd++;
		}
	}
    printf("the no of even are:%d\n",even);
    printf("the no of odd are:%d\n",odd);
    printf("the no of zero are:%d\n",zero);
	return 0;
}