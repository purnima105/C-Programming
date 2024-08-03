/*file named student.txt contains name, age, address, cell_number of some student ,wap to list aal the student 
who are from pokhara*/
#include <stdio.h>
#include <string.h>
    struct student
    {
    char name[30];
    int age;
    char address[60];
    unsigned long long cell_number;
    };
    int main()
    {
    int i,n;
    printf("enter the no of student: ");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
    printf("enter the details of student\n",i+1);
    printf("the name of the student: ");
    scanf("%s",&s[i].name);
    printf("enter the age: ");
    scanf("%d",&s[i].age);
    printf("enter the address: ");
    scanf("%s",s[i].address);
    }
    FILE *fp;
    fp=fopen("struct.txt","w+b");
    if (fp==NULL)
    {
        printf("file opening not succesful");
        return 1;
    }     
    fwrite(s,sizeof(int),n,fp);
    fseek(fp,0,SEEK_SET);
    fread(s,sizeof(int),n,fp); 

    for(i=0;i<3;i++)
    {
        if(strcmp(s[i].address,"pokhara")==0)
        {
            printf("%s\t%d\n",s[i].name,s[i].age);
        }
    }
        fclose(fp);
        return 0;           
    }



