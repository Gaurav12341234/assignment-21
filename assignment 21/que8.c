//8. Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[20];
    int class;
};
void display(struct student e[],int);
int main()
{
    struct student s[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Roll_no,name,class of student %d is=",i+1);
        scanf("%d",&s[i].rollno);
        fflush(stdin);
        fgets(s[i].name,20,stdin);
        s[i].name[strlen(s[i].name)-1]='\0';
        scanf("%d",&s[i].class);
    }
    printf("Display the information of students:\n");
    display(s,5);
}
void display(struct student e[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("\n%d %s %d",e[i].rollno,e[i].name,e[i].class);
    }
}