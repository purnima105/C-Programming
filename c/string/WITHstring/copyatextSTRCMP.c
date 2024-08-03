//wap to copy a string from one to another
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10],str2[10];
    printf("enter the string to be copied: ");
    gets(str1);
    strcpy(str2,str1);
    printf("%s",str2);
    return 0;
}