//2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]
#include<stdio.h>
struct employee input();
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
    return 0;
}
struct employee input()
{
    struct employee e;
    printf("Enter employe id,name,salary:");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,20,stdin);
    scanf("%d",&e.salary);
    return e;
}