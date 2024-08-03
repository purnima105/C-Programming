//lab 5
//wap to  input a charcter and write it to a file
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    printf("enter the character :  ");
    scanf("%c",&ch);
    fp=fopen("write.txt","w+");
    if (fp==NULL)
    {
        printf("file opening not sucessful");
        return 1;
    }
    fputc(ch,fp);
   
    //fprintf(fp,"%c",ch);
    
    //fseek(fp,0,SEEK_SET);  
    rewind(fp);
   // fscanf(fp,"%c",&ch);
   ch=fgetc(fp);
    printf("%c",ch);
    fclose(fp);
    return 0;


}