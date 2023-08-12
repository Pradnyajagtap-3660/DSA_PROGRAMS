/*Name:Pradnya Jagtap
Roll no. 23
Batch:B*/
#include<stdio.h>
int input();
int display();
int update();
struct time_struct
{
    int hours,minutes,seconds;
}t;
void main()
{
    input();
    display();
    update();
}

int input()
{
    printf("Time:");
    scanf("%d %d %d\n",&t.hours,&t.minutes,&t.seconds);
}
int display()
{
    printf("display time:\n");
    printf("%d:%d:%d",t.hours,t.minutes,t.seconds);
}
int update()
{
    if(t.seconds>=60)
    {
        t.seconds=0;
        t.minutes++;
    }
    if(t.minutes>=60)
    {
        t.minutes=0;
        t.hours++;
    }
    if(t.hours>=24)
    {
        t.hours=0;
    }
    printf("\nupdated time:%d:%d:%d",t.hours,t.minutes,t.seconds);

}
