//wap to read a string from keyboard (until enter key) and count the number of vowels,spaces,semicolons,commas ,consonent in that string.
#include <stdio.h>
int main()
{
    char str[80];
    int i, vowel=0 , consonent=0 , space=0 , semicolon=0 , comma=0 ;
    printf("enter the string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e' ||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowel++;
        }
        else if (str[i]==' ')
        {
            space++;
        }
        else if(str[i]==';')
        {
            semicolon++;
        }
        else if(str[i]==',')
        {
            comma++;
        }
        else
        {
            consonent++;
        }
        
    }
        printf("the no of vowels are: %d\n",vowel);
        printf("the no of space are: %d\n",space); 
        printf("the no of semicolon are: %d\n",semicolon); 
        printf("the no of comma are: %d\n",comma);
        printf("the no of consonent are: %d\n",consonent);
    return 0;

}