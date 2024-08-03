//wap to input a number from user if the number is even,write it to file even.dta otherwise write to odd.dat
#include<stdio.h>
int main()
{
    FILE *fp;
    FILE *f;
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    if (a%2==0)
    {
        fp=fopen("even.dat","w+b");
        if(fp==NULL)
        {
            printf("file opening not succesful");
            return 1;
        }
        fprintf(fp,"%d",a);
        fseek(fp,0,SEEK_SET);
        fscanf(fp,"%d",&a);
        printf("%d",a);
    }
    else 
    {
        f=fopen("odd.dat","w+b");
        if(fp==NULL)
        {
            printf("file opening not succesful");
            return 1;
        }
        fprintf(f,"%d",a);
        fseek(f,0,SEEK_SET);
        fscanf(f,"%d",&a);
        printf("%d",a);
    }
    fclose(fp);
    fclose(f);
    return 0;
}