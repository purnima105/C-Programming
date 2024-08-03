//to input n interger and print the number of odd and even
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,evcount=0,odcount=0;
    int *p;
    printf("enter the interger number to be stored: ");
    scanf("%d",&n);
    p=(int*) calloc(n,sizeof (int));
    printf("enter the elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d", p+i);
    }
    for(i=0;i<5;i++)
    {
        if (*(p+i)%2==0)
        {
            evcount++;
        }
        else
        {
            odcount++;

        }
    }
    printf("the count of even number are %d",evcount);
    printf("\nthe count of odd number are %d",odcount);

    return 0;
}

    
