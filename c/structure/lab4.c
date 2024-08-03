#include <stdio.h>
struct employee
{
    struct personal
    {
    char name[30];
    int age;
    }p;
    float salary;
    char dep[20];

};
int main()
{
    struct employee e[5];
    int i;
    for(i=0;i<5;i++)
    {
    printf("enter the info of employee:%d\n ",i+1);
    printf("enter the employee name: ");
    scanf("%s",&e[i].p.name);
    printf("enter the employee age: ");
    scanf("%d",&e[i].p.age);
    printf("enter the employee salary: ");
    scanf("%f",&e[i].salary);
    printf("enter the employee department: ");
    scanf("%s",&e[i].dep);
    }
for(i=0;i<5;i++)
{
    if (e[i].salary>=30000)
    {
        printf("the name is %s\n",e[i].p.name);
        printf("the department is %s\n",e[i].dep);
    }
}
return 0;
}