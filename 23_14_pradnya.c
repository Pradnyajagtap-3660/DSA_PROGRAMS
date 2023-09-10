/*Name:Pradnya Jagtap
Roll no. 23
Batch:B
double ended queue*/
#include<stdio.h>
#include<stdlib.h>
#define size 3
int a[size];
int f=-1;
int r=-1;

void EnqueueRear(int x)
{
    if((r==size-1 && f==0) || f==r+1)
    {
        printf("queue is full");
    }
    else
    {
        if(f==-1 && r==-1)
        {
            f++;
            r++;
            a[r]=x;
        }
        else
        {
            r=(r+1)%size;
            a[r]=x;
        }
    }
}

void EnqueueFront(int x)
{
    if((r==size-1 && f==0) || f==r+1)
    {
        printf("queue is full");
    }
    else
    {
        if(f==0)
        {
            f=size-1;
            a[r]=x;
        }
        else
        {
            f=f-1;
            a[r]=x;
        }
    }
}

void DequeueFront()
{
    if(r==-1 && f==-1)
    {
        printf("queue is empty");
    }
    else
    {
        if(r==f)
        {
            f=r=-1;
        }
        else
        {
            f=(f+1)%size;
        }
    }
}

void DequeueRear()
{
    if(r=-1 && f==-1)
    {
        printf("queue is empty");
    }
    else
    {
        if(f==r)
        {
            f=r=-1;
        }
        else
        {
            if(r==0)
            {
                r=size-1;
            }
            else
            {
                r=r-1;
            }
        }
    }
}

void display()
{
    int i;
    if(r==-1 && f==-1)
    {
        printf("queue is empty");
    }
    else
    {
       if(f<r)
		{
			for(i=f;i<=r;i++)
			{
				printf("\n%d",a[i]);
			}
		}
		else
		{
			for(i=f;i<=2;i++)
			{
				printf("\n%d",a[i]);
			}
			for(i=0;i<=r;i++)
			{
				printf("\n%d",a[i]);
			}
		}
	}
}

void main()
{
    int x;
    printf("    MENU    ");
    printf("\n1.insert element in rear");
    printf("\n2.insert element in front");
    printf("\n3.delete element from front");
    printf("\n4.delete element from rear");
    printf("\n5.display ");
    printf("\n6.exit");

    while(1)
    {
        int choice;
        printf("\nenter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                    printf("enter element in rear:");
                    scanf("%d",&x);
                    EnqueueRear(x);
                    break;
            case 2:
                    printf("enter element in front");
                    scanf("%d",&x);
                    EnqueueFront(x);
                    break;

            case 3:
                    DequeueFront();
                    break;
            case 4:
                    DequeueRear();
                    break;
            case 5:
                    display();
                    break;
            case 6:
                    exit(0);
            default:
                    printf("wrong choice");        
        }

    }
}
