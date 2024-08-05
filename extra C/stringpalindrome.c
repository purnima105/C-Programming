//check if a string is palindrome or not
#include <stdio.h>
#include <string.h>
int main()
{
    char org[10];
    char rev[10];
    printf("enter the string:");
    gets(org);
    strcpy(rev,org);
    strrev(org);
    if (strcmp(org,rev)==0)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }
    return 0;
}