//wap to copy an string from one tto another without using stringhandling
#include <stdio.h>
int main()
{
    char str[20] , str1[20];
    int i;
    printf("enter the string: ");
    gets(str);
    for(i=0;i<20;i++)
    {
        str1[i]=str[i];
    }
    str1[i]='\0';
    printf("%s",str1);
    return 0;
}