//wap to compare two string using string handling
#include <stdio.h>
#include <string.h>
int main()
{
    char str2[20]={"i am a student"},str1[20];
    printf("enter the string to be compared: ");
    gets(str1);
    if(strcmp(str1,str2)==0)
    {
        printf("the string are same");
    }
    else
    {
        printf("not same");
    }
    return 0;
} 