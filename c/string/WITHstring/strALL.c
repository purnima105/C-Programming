//wap to copy from one to another string,compare it,reverse it and find it's length and concatenating two string
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20],str2[20];
    char str;
    printf("enter the string: ");
    gets(str1);
    strcpy(str2,str1);    //copying the string from one to another
    printf("after copying %s\n",str2);
    //comparing both string 
    if(strcmp(str1,str2)==0)
    {
        printf("yes,same\n");
    }
    else
    {
        printf("not same\n");
    }
    //reversing the string
    strrev(str1);
    strrev(str2);
    printf("the reverse of 1st str is  %s and 2nd str %s\n",str1 ,str2 );
    //finding the length
   printf("the lenght of the string is %d and %d\n",strlen(str1) , strlen(str2));
   //concatenating two string 
  // strcat(str1,str2);
   printf("after concatenating : %s",strcat(str1,str2));
   return 0;




}
