//1. Define a structure Employee with member variables id, name, salary.
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    struct employee e1,e2;
    e1.id=1;
    strcpy(e1.name,"Gaurav");
    e1.salary=30000;
    printf("Print id,name,salary of employee 1 is: %d %s %d\n",e1.id,e1.name,e1.salary);
    printf("Enter id,name,salary of employee 2:");
    scanf("%d",&e2.id);
    fflush(stdin);
    fgets(e2.name,20,stdin);
    e2.name[strlen(e2.name)-1]='\0';
    scanf("%d",&e2.salary);
    printf("Print id,name,salary of employee 2 is:\n %d %s %d",e2.id,e2.name,e2.salary);
    return 0;
}
