#include <stdio.h>
int main()
{
    FILE *fp;
    char a[20];
    int i;
    printf("enter the elements of array: ");
    gets(a);
    fp=fopen("rerererere.txt","w+");
    if(fp==NULL)
    {
        printf("file opening not succesful");
        return 1;
    }
    fputs(a,fp);
    fseek(fp,8,SEEK_SET);
    fputs("monday",fp);
    fseek(fp,0,SEEK_SET);
    fgets(a,20,fp);
    printf("%s",a);
    fclose(fp);
    return 0;
}