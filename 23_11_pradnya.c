/*Name:Pradnya Jagtap
Roll no. 23
Batch:B
stack*/
#include<stdio.h>
#include<stdlib.h>
#define size 3
int a[size];
int top=-1;

void push(int x)
{
    if(top==size-1)
    {
        printf("Stack is full");
    }
    else
    {
        top++;
        a[top]=x;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        top=top-1;
    }
}

void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("\n\n%d",a[i]);
    }
}

void main()
{
    int x;
    printf("  MENU  ");
    printf("\n1.push element");
    printf("\n2.pop element");
    printf("\n3.display");
    printf("\n4.Exit");

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
                    push(x);
                    break;
            case 2:
                    pop();
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    exit(0);
                    break;
            default:
                    printf("wrong choice");
        }
    }
}

