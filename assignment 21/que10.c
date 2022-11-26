/*10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
      Physics (each out of 100) using a structure named Marks having elements roll no.,
      name, chem_marks, maths_marks and phy_marks and then display the percentage
      of each student.  */
#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[20];
    float chem,math,phy;
};
void display(struct student e[],int);
int main()
{
    struct student s[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Roll_no,name,chem_marks, maths_marks and phy_marks of a student %d is=",i+1);
        scanf("%d",&s[i].rollno);
        fflush(stdin);
        fgets(s[i].name,20,stdin);
        s[i].name[strlen(s[i].name)-1]='\0';
        scanf("%f%f%f",&s[i].chem,&s[i].math,&s[i].phy);
    }
    printf("Display the percentage of each students:\n");
    display(s,5);
}
void display(struct student e[],int size)
{
    int i;
    float per;
    for(i=0;i<size;i++)
    {
        per=0;
        per=(e[i].chem+e[i].math+e[i].phy)/300*100;
        printf("\nPercenteage of %s is %.2f%%",e[i].name,per);
    }
}