//3. Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
#include<string.h>
struct employee input();
void display(struct employee);
struct employee
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    struct employee e1;
    e1=input();
    display(e1);
    return 0;
}
struct employee input()
{
    struct employee e;
    printf("Enter employe id,name,salary:");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%d",&e.salary);
    return e;
}
void display(struct employee e)
{
    printf("\n%d %s %d",e.id,e.name,e.salary);
}