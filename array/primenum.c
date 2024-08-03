//to input elements of array and print only the prime numbers
#include<stdio.h>
int main()
{
    int a[5],i,j,count;
    printf("enter the elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<5;i++)
     {
        count=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                count++;
            }
        }
            if(count==2)
            
                printf("\t%d",a[i]);
            
        
     }
    
return 0;
}

