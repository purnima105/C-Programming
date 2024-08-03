//wap to print sum of 1 to 100 num using do....while loop
#include <stdio.h>
int main()
{
    int sum=0;
    int i=1;
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=100);
    printf("The sum of 1 to 100 is %d",sum);
    return 0;
    
}