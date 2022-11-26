//6. Write a function to sort employees according to their names [refer structure from question 1]
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
struct employee input();
void display(struct employee);
void sort(struct employee e[],int size);
int main()
{
    struct employee e1[5];
    int i;
    for(i=0;i<5;i++)
        e1[i]=input();
    sort(e1,5);
    for(i=0;i<5;i++)
        display(e1[i]);
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
void sort(struct employee e[],int size)
{
    int i,j;
    struct employee temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(strcmp(e[i].name,e[j].name)>0)
            {
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
}