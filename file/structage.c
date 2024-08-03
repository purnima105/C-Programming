//input the values of name,age,phone no,of a student and wrrite in to file.
//read the details of the student & print the name if age<20.
#include <stdio.h>
struct student
{
    char name[20];
    int age;
    unsigned long long int contact;
};
int main()
{
struct student s[3];
int i;
FILE *fp;
for(i=0;i<3;i++)
{
    printf("The details of student\n",i+1);
    printf("enter the name of student:\n ");
    scanf("%s",&s[i].name);
    printf("enter the age of student:\n ");
    scanf("%d",&s[i].age);
    printf("enter the contact of student: \n");
    scanf("%d",&s[i].contact);
}
fp=fopen("strctureeeee.dat","w+b");
if (fp==NULL)
{
    printf("file opening not succesful!!");
    return 1;
}
fwrite(s,sizeof(int),3,fp);
rewind(fp);
fread(s,sizeof(int),3,fp);
for(i=0;i<3;i++)
{
    if(s[i].age<20)
    {
        printf("the name of the studdent having less than 20 age are %s\n",s[i].name);
    }
}
fclose(fp);
return 0;

}