//7. Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct time
{
    int hr,min,sec;
};
int main()
{
    struct time start,end,diff;
    printf("Start time HH:MM:SS=");
    scanf("%d:%d:%d",&start.hr,&start.min,&start.sec);
    printf("End time HH:MM:SS=");
    scanf("%d:%d:%d",&end.hr,&end.min,&end.sec);
    if(end.sec<start.sec)
    {
        end.sec+=60;
        end.min-=1;
    }
    if(end.min<start.min)
    {
        end.min+=60;
        end.hr-=1;
    }
    diff.sec=end.sec-start.sec;
    diff.min=end.min-start.min;
    diff.hr=end.hr-start.hr;
    printf("Difference between two time period is %d:%d:%d",diff.hr,diff.min,diff.sec);
    return 0;
}