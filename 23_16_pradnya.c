#include<stdio.h>
#include<stdlib.h>
int temp;
int newnode;

struct node{
    int info;
    struct node *next;
};
struct node *list= NULL;

struct node *getnode(void){
    return((struct node *)malloc(sizeof(struct node)));
}
void freenode(struct node *p){
    free(p);
}

void push(int x)
{
struct node *newnode;

newnode=getnode();
newnode->info=x;
newnode->next=list;
list=newnode;
}

void pop()
{
    struct node *temp;
    if(list==NULL)
    {
        printf("empty");
    }
    else
    {
        temp=list;
        list=list->next;
        freenode(temp);
    }
}

void display()
{
    struct node *temp;
    if(list==NULL)
    {
        printf("empty");
    }
    else
    {
        temp=list;
        while(temp->next != NULL)
        {
            printf("\n%d",temp->info);
            temp=temp->next;
        }
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

