//wap to read a line of text and print the vowels in it.
#include <stdio.h>
#include <string.h>
int main()
{
    char line[50];
    int i;
    printf("enter the text: ");
    gets(line);
    strupr(line);
    for(i=0;line[i]!='\0';i++)
    {
        if(line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U')
        {
            printf("%c\t",line[i]);
            
        }
    }
    return 0;
}