//converting name into ascii value
#include <stdio.h>
int main()
{
    char str[20]="pur nima";
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c ",str[i]);
        
    }
    printf("\n");
    for(i=0;str[i]!='\0';i++)
    {
        printf("%d  ",str[i]);
    }
    return 0;
}