//wap to to write and read an array of integers to a file huhu.txt
#include <stdio.h>
int main()
{
    int a[5],i,b[5];
    printf("enter the elements of array: ");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    FILE *fp;
    fp=fopen("huhu.txt","w+");
    if (fp==NULL)
    {
        printf("file opening not succesful");
    }
    fwrite(a,sizeof(int),5,fp);
    fseek(fp,0,SEEK_SET);
    fread(b,sizeof(int),5,fp);
    fseek(fp,0,SEEK_SET);
    for(i=0;i<5;i++)
    {
        printf("%d\t",b[i]);
    }
    fclose(fp);
    return 0;
}