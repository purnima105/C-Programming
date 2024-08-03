//to store n integer and print even number using malloc
#include <stdio.h>
#include <stdlib.h>             // for: malloc()
int main()
{
int n,i;
int *p;
printf("enter the number of integer to be stored: ");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
printf("enter the elements: ");
for (i=0;i<n;i++)
{
    scanf("%d", p+i);
}
printf("\nthe even number are: ");
for (i=0;i<n;i++)
{
    if(*(p+i)%2==0)
    {
        printf("%d\t",*(p+i));
    }
}
free(p);
return 0;
}
