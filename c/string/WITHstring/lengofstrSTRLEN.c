//wap to find length of string using strig handling function
#include <stdio.h>
#include <string.h>
int main()
{
   char leng[20];
   int len;
   printf("enter the string: ");
   gets(leng);
   len=strlen(leng);
   printf("the length of the string is %d",len);
return 0;
}