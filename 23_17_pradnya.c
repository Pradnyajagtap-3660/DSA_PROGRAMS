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


void enqueue(int x)
{
    if(list==NULL)
    {
        struct node *newnode;

        newnode=getnode();
        newnode->info=x;
        newnode->next=list;
        list=newnode;
    }
    else
    {
        struct node *newnode,*temp;
        newnode=getnode();
        newnode->info=x;
        newnode->next=NULL;
        temp=list;
        while(temp!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void dequeue()
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


