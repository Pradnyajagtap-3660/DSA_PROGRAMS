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

void insertbeg(int x)
{
struct node *newnode;

newnode=getnode();
newnode->info=x;
newnode->next=list;
list=newnode;

}

void insertend(int x)
{
    if(list==NULL)
    {
        insertbeg(x);
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

void insertatloc(int P,int x)
{
    int i;
    struct node *newnode,*temp;
    if(list==NULL || P==1)
    {
        insertbeg(x);
    }
    else
    {
        temp=list;
        for(i=1;i<P-1;i++)
        {
            temp=temp->next;
        }
        newnode=getnode();
        newnode->info=x;
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

void delatloc(int P)
{
    int i;
    struct node *temp,*t2;
    if(list==NULL)
    {
        printf("list is empty");
    }
    else
    {
        if(P==1)
        {
            list=list->next;
            freenode(list);
        }
        else
        {
            temp=list;
            for(i=1;i<P-1;i++)
            {
                temp=temp->next;
            }
            t2=temp->next;
            temp->next=t2->next;

        }
        freenode(t2);
    }
}

void delEnd(int P)
{
    struct node *temp,*t2;
    if(list==NULL)
    {
        printf("empty");
    }
    else
    {
        if(P==1)
        {
            list=list->next;
        }
        else
        {
            temp=list;
            while(temp->next != NULL)
            {
                t2=temp;
                temp=temp->next;
            }
            t2->next=NULL;
        }
        freenode(t2);
    }
}

void delbeg()
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
    int x,P;
    printf("  MENU  ");
        printf("\n1.insert at begining");
        printf("\n2.insert at end");
        printf("\n3.insert at location");
        printf("\n4.delete at location");
        printf("\n5.delete at end");
        printf("\n6.delete at beginning");
        printf("\n7.display");
        printf("\n8.exit");
    while(1)
    {
        int choice;
        printf("\nenter choice:");
        scanf("\n%d",&choice);

        switch(choice)
        {
            case 1:
                    printf("enter element:");
                    scanf("\n%d",&x);
                    insertbeg(x);
                    break;
            case 2:
                    printf("enter element:");
                    scanf("\n%d",&x);
                    insertend(x);
                    break;
            case 3:
                    printf("enter element:");
                    scanf("%d",&x);
                    
                    printf("enter position:");
                    scanf("%d",&P);
                    insertatloc(P,x);
                    break;
            case 4:
                    
                    printf("enter position:");
                    scanf("%d",&P);
                    delatloc(P);
                    break;
            case 5:
                    printf("enter position:");
                    scanf("%d",&P);
                    delEnd(P);
                    break;
            case 6:
                    delbeg();
                    break;
            case 7:
                    display();
                    break;
            case 8:
                    exit(0);
                    break;
            default:
                    printf("wrong choice");
        }
    }
}