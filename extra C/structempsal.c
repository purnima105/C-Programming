//wap to input name, salary and address of 2 employee and store the details into file employee.dat.
//write the program to extract and list the employees whose salary is greater than 10000.
#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    int salary;
    char address[30];
};

int main()
{
    int i;
    struct employee e[3];
    for(i=0;i<3;i++)
    {
    printf("enter the details of employee %d\n",i+1);
    printf("enter the name of the employee: ");
    scanf("%s",&e[i].name);
    printf("enter the salary: ");
    scanf("%d",&e[i].salary);
    printf("enter the address: ");
    scanf("%s",&e[i].address);
    }
   FILE *fp;
   fp=fopen("employee.dat","w+b");
   if 
   (fp==NULL)
   {
    printf("File opening is not succesful!! ");
    return 1;
   }
   fwrite(e,sizeof(struct employee),3,fp);
   fseek(fp,0,SEEK_SET);
   fread(e,sizeof(struct employee),3,fp);
   //fputs(ch,fp);
   //rewind(fp);
   //ch=fgets(fp); 
   for (i = 0; i < 3; i++)
   {
      if(e[i].salary>=10000)
      {
        printf("%s\n",e[i].name);
        printf("%d",e[i].salary);
      }
   }
   fclose(fp);
   return 0;
   
}