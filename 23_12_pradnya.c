/*Name:Pradnya Jagtap
Roll no. 23
Batch:B
Queue*/
#include<stdio.h>
#include <stdlib.h>
#define size 3
int a[size];
int f=-1;
int r=-1;

void enqueue(int x)
{
    if(r==size-1)
    {
        printf("Queue is full");
    }
    else
    {
        if(r==-1 && f==-1)
        {
            r++;
            f++;
            a[r]=x;
        }
        else
        {
            r++;
            a[r]=x;
        }
    }
}

void dequeue()
{
    if(r==-1 && f==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        if(r==f)
        {
            r--;
            f--;
        }
        else
        {
            f++;
        }
    }
}

void display()
{
    int i;
    if(r==-1 && f==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        for(i=f;i<=r;i++)
        {
            printf("\n%d",a[i]);
        }
    }
}

void main()
{
    int x;
    printf("   menu   ");
    printf("\n1.Insert element");
    printf("\n2.delete element");
    printf("\n3.display");
    printf("\n4.exit");


    while(1)
    {
        int choice;
        printf("\nenter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                    printf("enter the element:");
                    scanf("%d",&x);
                    enqueue(x);
                    break;
            case 2:
                    dequeue();
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    exit(0);
                    break;
            default:
                    printf("Wrong choice");            
                    
        }
    }
}

