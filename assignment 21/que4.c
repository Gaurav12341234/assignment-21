//4. Write a function to find the highest salary employee from a given array of 10
//   employees. [ Refer structure from question 1]
#include<stdio.h>
#include<string.h>
struct employee input();
void highest(struct employee *e1,int size);
void display(struct employee e);
struct employee
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    struct employee e1[10];
    int i;
    for(i=0;i<10;i++)
        e1[i]=input();
    printf("Highest salary employee from a given array is:");
    highest(e1,10);
    return 0;
}
struct employee input()
{
    struct employee e;
    printf("Enter employeid,name,salary of a employee:");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%d",&e.salary);
    return e;
}
void highest(struct employee *e1,int size)
{
    int i,max;
    max=e1[0].salary;
    for(i=1;i<size;i++)
    {
        if(max<e1[i].salary)
            max=e1[i].salary;
    }
    for(i=0;i<size;i++)
    {
        if(e1[i].salary==max)
            display(e1[i]);
    }
}
void display(struct employee e)
{
    printf("%d %s %d",e.id,e.name,e.salary);
}